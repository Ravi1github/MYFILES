import React from 'react'
import { useHistory, useLocation, useParams } from 'react-router-dom'

function User() {

    const {fname}=useParams();
    const {lname}=useParams();
     //it return the object
    const history=useHistory();
    //getting url location
    //it return the object
    const location=useLocation();
    console.log(location);
  return (
    <div>
      <h1>my name is {fname} {lname}</h1>
      <h3>my current location is{location.pathname}</h3>
     {location.pathname==='/user/ravi/kumar'?<button onClick={()=>{history.goBack() }}>Go back</button>:null }
    </div>
  )
}

export default User
