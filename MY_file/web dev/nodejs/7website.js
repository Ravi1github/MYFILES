const http=require('http');
const port=process.env.PORT||3000;
const server=http.createServer((req,res)=>{
console.log(req.url);
res.statusCode=200;
res.setHeader('Content-Type','text/html');

if(req.url=='/')
{
    res.statusCode=200;
    res.end('<h1> RAVI JAISWAL</h1>  <p> this is a paragraph  </p>');
}

else if(req.url=='/about')
{
    res.statusCode=200;
    res.end('about  <h1>myself RAVI JAISWAL</h1>  <p> this is a paragraph  </p>');
}
else{
    res.statusCode=404;
    res.end('  <h3>   errror has occured</h3>')
}

   


});
server.listen(port,()=>{
    console.log(`listening the server ${port} `);
});
