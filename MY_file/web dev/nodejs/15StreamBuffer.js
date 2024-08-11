const fs=require('fs');
const http=require('http');
const { Stream } = require('stream');

 const server= http.createServer();
// making as a event
 server.on('request',(req,res)=>{
// for reading
// fs.readFile('input.txt','utf-8',(err,data)=>{
//     console.log("server is running")
//     res.end(data);
// });



// //for streaming
// const rstream=fs.createReadStream('input.txt');
// rstream.on('data',(chunkdata)=>{
//     res.write(chunkdata);
// });

// rstream.on('end',()=>{
//     res.end();
// });
// //if any error
//   rstream.on('error',(err)=>{
//     console.log(err);
//     res.end("file not found ");
//   })


//or


 const rstream=fs.createReadStream('input.txt');
 rstream.pipe(res);


 });
   server.listen(3000,'127.0.0.1');