const path=require('path');
const express=require('express');
const app=express();
//built in middleware
//for adding static html file we alway use the public folder
const staticpath=path.join(__dirname,'./public');
//sequence wise execute hota
app.use(express.static(staticpath));

app.get('/',(req,res)=>{
    res.send("welcome to the home page");
})
app.get('/about',(req,res)=>{
    res.write("welcome to the about page");
 //for res.write we have to end it
 res.end();
})

app.get('/contact',(req,res)=>{
    res.send("welcome to the contact page");
})


app.listen(8000,()=>{
    console.log("listening at the port 8000");
})