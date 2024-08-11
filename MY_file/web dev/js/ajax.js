
 let fetchbtn=document.getElementById('fetchbtn');
 fetchbtn.addEventListener('click' ,buttonclick);
   function buttonclick(){

    console.log("you clicked");
    //initate xhr object
    const xhr=new XMLHttpRequest();


    //open the object
    //here true is used for asynchrounous
xhr.open('GET','harry.txt',true);

//what to do on progress  (optional)
xhr.onprogress=function(){
    console.log("On Progress");  

}
// xhr.onreadystatechange=function(){
//     console.log("ready state is", xhr.readyState);
// }


//onload
xhr.onload=function(){
 if(this.status===200)
 {
    console.log(this.responseText);
 }
 else
 {
    console.log("some error occured");
 }

}


//send request

xhr.send();
  console.log("we are done");


   }