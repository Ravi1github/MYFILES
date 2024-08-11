let username=document.getElementById('username');
const email=document.getElementById('email');
const phone=document.getElementById('phone');
let validemail=false;
let validphone=false;
let validuser=false;
console.log(email,phone,username);
//name
username.addEventListener('blur',function(){
console.log("dd");
let reg=/^[a-zA-z]([0-9a-zA-Z]){1,10}/;
let str=username.value;
console.log(reg,str);
if(reg.test(str))
{
    console.log("it match");
    //if match then remove it
    username.classList.remove('is-invalid');
    validuser=true;
}
else{
    //if not match then add it
    username.classList.add('is-invalid');
}
});
//email
email.addEventListener('blur',function(){
    console.log("dd");

    let reg=/^([a-zA-Z0-9]+)@([a-zA-Z0-9])/;//{1 se 10 char hoge}
let str=email.value;
console.log(reg,str);
if(reg.test(str))
{
    console.log("it match");
    //if match then remove it
    email.classList.remove('is-invalid');
    validemail=true;
}
else{
    //if not match then add it
    email.classList.add('is-invalid');
}
});
//phone
phone.addEventListener('blur',function(){
    console.log("dd");

    let reg=/^([0-9]){10}$/;
let str=phone.value;
console.log(reg,str);
if(reg.test(str))
{
    console.log("it match");
    //if match then remove it
    phone.classList.remove('is-invalid');
    validphone=true;
}
else{
    //if not match then add it
    phone.classList.add('is-invalid');
}
});
let submit=document.getElementById('submit');
submit.addEventListener('click',function(e){
    e.preventDefault();
    console.log("fd");
//if all correct the form submit
if(validemail&&validphone&&validuser){
console.log("form is submitting");

let success=document.getElementById('success');
success.classList.add(show);
failure.classList.remove(show); 
}
else{
    console.log("form is not submitting");
    let failure=document.getElementById('failure');
    failure.classList.add(show); 
    success.classList.remove(show);
}

});