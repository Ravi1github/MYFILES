 const EventEmitter=require('events');

const event = new EventEmitter();
  //      eventname   callback function
event.on('waterfull', () => {
  console.log('please turnoff the motor');
setTimeout(() => {
    console.log("please turnoff the motor! it is a remainder");
}, 3000);
});
//emiting the event waterfull
event.emit('waterfull');


//another by passing argument

event.on('checkpage',(page,msg)=>{
  console.log(`total page is ${page} now it is ${msg}`)
});

                       //passing argument
event.emit('checkpage',200,'ok');

event.on('land',()=>{
  console.log("land le lo mera")
})

event.emit("land");