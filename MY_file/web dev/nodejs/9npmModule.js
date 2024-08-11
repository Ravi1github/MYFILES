//const chalk =require('chalk');
const validator=require('validator');
//all these comes from npm package
//for refer to npm

//console.log(chalk.green("hello world"));

//validating email
const result =  validator.isEmail('ravm@kk.com');
console.log(result);

//importing anoter pacakge
