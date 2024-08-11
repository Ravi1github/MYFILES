import React, { useState } from 'react'

function Search() {
  const[imgname,setimgname] = useState('')

  const  searchhandler=(event)=>{
   setimgname(event.target.value)

  }
  return (
    <>
    <div>
     <input type="text"  style={{marginBottom:'40px'}} placeholder='search' value={imgname} onChange={searchhandler} />
    </div>
  { imgname===""?null:<img src={`https://source.unsplash.com/400x300/?${imgname}`} alt="" />}
    </>
  )
}

export default Search
