const mongoose = require('mongoose');
const validator=require("validator");
//connection creation and creating new db if not present
mongoose.set('strictQuery', false); // collectionname    it return a promise
mongoose.connect("mongodb://127.0.0.1/ravidatabase").then(()=> {
    console.log("connected successfully ")
}).catch((err)=> {
    console.log("error occured")
});

//schema
//it is in camel case
// structrue of document defining
 const weblistSchema=new mongoose.Schema({
    name:{
        type:String,
        //validator 
        required:true,
        lowercase:true,
        minlenght:2,
        maxlength:50,
        
    
    },
    ctype:{
        type:String,
        required:true,
        lowercase:true,
        //we can only enter this values only
        enum:["frontend","backend"],

    },
   rating:{
        type:Number,
        required:true,
        min:0,
        max:10,
    },

    email:{
        type:String,
        unique:true, //sabka unique email hai
        validate(value){
            if(!validator.isEmail(value)){
                throw new Error("email is invalid");
            }
    }
},
    active:Boolean,
    
    date:{
        type:Date,
        default:Date.now,
    }

 });

 //mongoose model
 //collection creation
 const Weblist=new mongoose.model("Weblist",weblistSchema);

//insert document

const createDocument= async()=>{

    try{  
        const nodejsWeblist=new Weblist({
            name:'node js',
            ctype:"backend",
            active:true,
            rating:4,
            email:"ravi@gmail.com"
        });
        const htmlWeblist=new Weblist({
            name:'html',
            ctype:"frontend",
            active:true,
            rating:8,
        });
        const expressWeblist=new Weblist({
            name:'express',
            ctype:"backend",
            active:true,
            rating:6,
        });

         //saving the document               // no.of document to be inserted
    const result = await Weblist.insertMany([nodejsWeblist,htmlWeblist,expressWeblist]);
    console.log(result);
    }
    catch(err){
        console.log("document is not created");
    }
    
 

}
   //createDocument();

//reading the document
 const getDocument=async()=>{
// const result=await Weblist.find();
//by using  all query and operator
 //const result=await Weblist.find({ctype:"backend"});
// const result=await Weblist.find({ctype:{$in:["backend","frontend"]}});
 //const result=await Weblist.find({$or:[{rating:4},{ctype:"backend"}]});
 //const result=await Weblist.find({rating:{$lt:6}})
 //counting no. of document
 //const result=await Weblist.find().countDocuments();
 //const result=await Weblist.find().sort({name:1});

 console.log(result);
 }
  
 //getDocument();


//query operator
//refers to mongoose query operator documentation

//update operation

const updateDocument=async()=>{
const result=await Weblist.updateMany({rating:3},{$set:{ctype:"backend"}});
console.log(result);

}
//updateDocument();

//delete operation

const deleteDocument=async()=>{
const result=await Weblist.deleteOne({_id:"63c7c79cc848f5b28594f423"});
console.log(result);
}

//deleteDocument();

