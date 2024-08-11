const fs=require('fs');

//for async we required callback function.

fs.writeFile('filehai.txt','this is my filename',(err)=>{
console.log("file is created");

});
fs.appendFile('filehai.txt',', this is addded later',(err)=>{
    console.log("added successful");
});


//for reading
// fs.readFile('filehai.txt', 'utf8', (err,data)=>{
// console.log(data);
// });