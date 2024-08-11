const express = require("express");
const router=new express.Router();
//requiring schema
const Student = require("../model/students");


//this is homepages
router.get('/', (req, res) => {
    res.send("welcome to home pages");
});

//post or create
router.post('/studentspage', async(req, res) => {

    try{
 //data is coming from postman entered value
     const  user= new Student(req.body);
     console.log(user);
     //saving data in database
     const createuser=await user.save();
     //sending on server
     res.status(201).send(createuser);
    }
    catch(err){
        res.status(400).send(e);
    }  ;
   
});

//get  request or read \\for reading the data of students

router.get('/studentspage', async(req, res) => {

    //for reading the data
    try{
         const studentdata=await Student.find();
         res.send(studentdata);
    }
    catch(err){
        res.send(err);
    }
   
});

//for reading the data of individual students
        //getting data from id we can also use name ,email..etc;
router.get('/studentspage/:id',async(req,res)=>{

try{

const id=req.params.id;
    const studentdata= await Student.find({_id:id});  
    res.send(studentdata);

}
catch(err){
    res.send(err);
}


})

//for delete request
  
router.delete("/studentspage/:id",async(req,res)=>{

    try{
        const id=req.params.id;
     const deletestudent=await Student.findByIdAndDelete({_id:id})
     console.log(deletestudent);
     res.send(deletestudent);
    }
    catch(err){
    res.status(500).send(err);
    }
    
    })

// for updation patch request is used

router.patch("/studentspage/:id",async(req,res)=>{

    try{
        const id=req.params.id;
     const updatestudent=await Student.findByIdAndUpdate(id,req.body);
     console.log(updatestudent);
     res.send(updatestudent);
    }
    catch(err){
    res.status(404).send(err);
    }
    
    })


module.exports=router;