const express=require('express');
const app= express();
const path=require("path");
const hbs=require("hbs");
const templatepath=path.join(__dirname,"./templates/views");
const partialpath=path.join(__dirname,'./templates/partials');
const staticpath=path.join(__dirname,'./public');
//for adding dynamic file from the views folder
app.set('view engine','hbs');
app.set("views",templatepath);
hbs.registerPartials(partialpath);
//app.use(express.static(staticpath));
//template engine route
app.get("/",(req,res)=>{
    //we render in place of send or write
    res.render('index',{
       //passing placeholder
        name:'ravi'
    });
});
//adding about
app.get("/about",(req,res)=>{
    res.render('about',);
});
//for showing error page
app.get("*",(req,res)=>{
    res.render('404page',{
        errorcomment:"page is not found",
    });
})

 app.listen(8000,()=>{
    console.log("listening at the port 8000");
 })