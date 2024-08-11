const fs=require('fs');
const biodata={
    name:'ravi',
    age:'20',
    langugage:'javascript'
}
 
const jsondata= JSON.stringify(biodata);
fs.writeFile('json1.json',jsondata,(err)=>{
    console.log("file created succesfully");
});
fs.readFile('json1.json','utf-8',(err,data)=>{
    console.log("read successful");
    console.log(data);
    const obj=JSON.parse(data);
    console.log(obj);
    
});