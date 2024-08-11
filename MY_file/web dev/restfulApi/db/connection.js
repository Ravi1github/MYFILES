const mongoose=require("mongoose");

mongoose.set('strictQuery', false);                  //it return a promise
mongoose.connect("mongodb://127.0.0.1/students-api").then(()=> {
    console.log("connected successfully ")
}).catch((err)=> {
    console.log("error occured")
});