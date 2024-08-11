const mongoose=require("mongoose");
const validator=require("validator");
//schema defining
const studentSchema= new mongoose.Schema({
    name:{
        type:String,
        reqired:true,
        minlength:2,

    },
    email:{
        type:String,
        required:true,
        unique:[true,"email is already exists"],
        validate(value){
            if(!validator.isEmail(value)){
                throw new Error("invalid email");
            }
        }
    },
    phone:{
        type:Number,
        min:10,
    
        required:true,
        unique:true,
    },
    address:{
        type:String,
        reqired:true,
    }
});

//creating new collection
const Student= new mongoose.model("Student",studentSchema);

//exporting the collection
module.exports=Student;