console.log("note making");
//adding notes
let addbtn=document.getElementById('addbtn');
addbtn.addEventListener("click",function(e){
addtext=document.getElementById('addtxt');
//getting notes which present in local storage
let notes=localStorage.getItem('notes');
if(notes==null){
noteobj=[];

}
else
{
    noteobj=JSON.parse(notes);
}
noteobj.push(addtext.value);
localStorage.setItem('notes',JSON.stringify(notes));
addtext.value=" ";
console.log(noteobj);


})