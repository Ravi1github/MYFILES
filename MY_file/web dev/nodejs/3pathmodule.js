//importing
const path=require('path');
//they are important function from os by nodejs 

const a=path.basename('C:\\temp\\myfile.html');
const b=path.dirname('C:\\temp\\myfile.html');
const c=path.extname('C:\\temp\\myfile.html');
console.log(a);
console.log(b);
console.log(c);
console.log('for complete');
 console.log(path.parse('C:\\temp\\myfile.html'));
