const express=require('express');
const app= express();
//getting the data from server
              //callback function
app.get('/',(req,res)=>{
//send to server
res.send('hello from the  express files');
});

app.get('/about',(req,res)=>{
   
   res.send('hello from the about pages');
   });
 app.listen(8000,()=>{
    console.log("listening at the port 8000");
 })