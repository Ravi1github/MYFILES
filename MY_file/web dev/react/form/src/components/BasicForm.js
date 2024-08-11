import { useState } from "react";
import './basic.css'
const BasicForm = (props) => {
  const[formvalidname,setvalidname]=useState(false);
  const[formvalidlast,setvalidlast]=useState(false);
  const[formvalidemail,setvalidemail]=useState(false);
  const[entername,setname]=useState('')
  const[enteremail,setemail]=useState('')
  const[enterlastname,setlastname]=useState('')
function submithandler(event)
{
event.preventDefault();
if(entername.trim().length===0)
  {
    setvalidname(true);
    return;
  }
  if(enterlastname.trim().length===0)
  {
    setvalidlast(true);
    return;
  }
  if(enteremail.trim().length===0){
    setvalidemail(true);
    return;
  }

  setname('');
  setlastname('')
  setemail('');
  setvalidname(false);
  setvalidlast(false);
  setvalidemail(false);
  
}
function namehandler(event){
  setname(event.target.value);
  

}
function lastnamehandler(event){
  setlastname(event.target.value);
  

}
function emailhandler(event){
  setemail(event.target.value);
  

}
const mystyle={
  color:'red',
}
  return (
    <form onSubmit={submithandler}>
      <div className='control-group'>
        <div className=  'form-control'>
          <label htmlFor='name'>First Name</label>
          <input type='text' value={entername} onChange={namehandler} id='name' className={formvalidname===true?'errorclass':''}  />
          {formvalidname&& <p style={mystyle} >please enter valid name...</p>}
        </div>
        <div className='form-control'>
          <label htmlFor='name' >Last Name</label>
          <input type='text' className={formvalidlast===true?'errorclass':''} id='name'value={enterlastname} onChange={lastnamehandler} />
          {formvalidlast&& <p style={mystyle}>please enter  last name...</p>}
        </div>
      </div>
      <div className='form-control'>
        <label htmlFor='name'>E-Mail Address</label>
        <input type='text' id='name' className={formvalidemail===true?'errorclass':''} value={enteremail} onChange={emailhandler} />
        {formvalidemail&& <p style={mystyle}>please enter valid email...</p>}
      </div>
      <div className='form-actions'>
        <button>Submit</button>
      </div>
    </form>
  );
};

export default BasicForm;
