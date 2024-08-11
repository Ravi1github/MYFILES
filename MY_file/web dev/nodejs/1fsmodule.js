//importing
const fs =require('fs');
//they are important function from fs by nodejs 

const a=fs.readFileSync('filehai.txt','utf-8');
console.log(a);

//for writing
const b=fs.writeFileSync('filecreated.txt','this is to write');
//to append
fs.appendFileSync('filecreated.txt',' , this is added');
//for making new folder
//fs.mkdirSync('ramji');
//to write inside this folder
fs.writeFileSync('ramji/create.txt','hello');
