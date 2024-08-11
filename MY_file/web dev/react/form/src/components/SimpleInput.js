import { useState,useRef } from "react";

const SimpleInput = (props) => {
  const[enteredname,setenterdname]=useState('');
  const[namevalid,setnamevalid]=useState(false);

  function nameinputhandler(event){
  
  setenterdname(event.target.value);

  }
  function submithandler(event){
    event.preventDefault();
    if(enteredname.trim().length===0)
    {
      setnamevalid(true);
      return;
    }
    setnamevalid(false);
    console.log(enteredname);
    //or another ways of getting enterd value
    const enteredvalue=nameinputref.current.value;
    console.log(enteredvalue);
    setenterdname('');
  }
  //using ref
const nameinputref=useRef();
  return (
    <form onSubmit={submithandler}>
      <div className='form-control'>
        <label htmlFor='name'>Your Name</label>
        <input type='text' value={enteredname} id='name'onChange={nameinputhandler} 
           ref={nameinputref}
        />
        {namevalid&&<p>Enter valid name</p>}
      </div>
      <div className="form-actions">
        <button>Submit</button>
      </div>
    </form>
  );
};

export default SimpleInput;
