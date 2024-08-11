const http=require('http');
//const port=process.env.PORT||3000;
const server=http.createServer((req,res)=>{
    res.statusCode=200;
    res.setHeader('Content-Type','text/html');
    //response dega
    res.end('<h1>my name is RAVI JAISWAL</h1>  <p> this is a paragraph  </p>');

});
//server se listen
server.listen(8000,"127.0.0.1",()=>{
    console.log('listening the server on port 8000');
});
