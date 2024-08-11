const http=require('http');
const fs=require('fs');
var requests=require('requests');
const homefile=fs.readFileSync('16home.html','utf-8');

const replaceval=(tempval,orgval)=>{
let temperature=tempval.replace("{%tempval%}",orgval.main.temp);
temperature=temperature.replace("{%tempmin%}",orgval.main.temp_min);
temperature=temperature.replace("{%tempmax%}",orgval.main.temp_max);
temperature=temperature.replace("{%location%}",orgval.name);
temperature=temperature.replace("{%country%}",orgval.sys.country);
temperature=temperature.replace("{%tempstatus%}",orgval.weather[0].main);

return temperature;
}

const server=http.createServer((req,res)=>{
    if(req.url='/')
    {
        requests("https://api.openweathermap.org/data/2.5/weather?q=delhi&appid=938932f0aae41b052713d9a2d3a2ae84")
.on('data', (chunk)=> {
    //convering into obj
    const obj=JSON.parse(chunk);
    //making array of object
    const array=[obj];
  const realtimedata=array.map((val)=>replaceval(homefile,val)).join('');
  res.end(realtimedata);
 //console.log(realtimedata);
})
.on('end', (err)=> {
  if (err) return console.log('connection closed due to errors', err);
 
  res.end();
});
    }
})
server.listen(8000,'127.0.0.1');