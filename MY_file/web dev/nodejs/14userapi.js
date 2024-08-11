const fs=require('fs');
const http=require('http');
//const port=process.env.PORT||3000;
const server=http.createServer((req,res)=>{
    res.statusCode=200;
    res.setHeader('Content-Type','text/html');
    //response dega
   if(req.url==='/')
   {
    res.statusCode=200;
    res.end('<h1>my name is RAVI JAISWAL</h1>  <p> this is a paragraph  </p>');
   }
   else if(req.url==='/about')
   {
    res.statusCode=200;
    res.end('<h1>this is about pages</h1>  ');
   }
   //for the api 
   else if(req.url==='/userapi'){
    res.statusCode=200;
   fs.readFile('json1.json','utf-8',(err,data)=>{
    console.log(data);
     res.end(data);
   });
   }
   else{
    res.statusCode=404;
    res.end('<h1>error 404 ,page does not exists</h1>  ');
   }

});
//server se listen
server.listen(8000,"127.0.0.1",()=>{
    console.log('listening the server on port 8000');
});
