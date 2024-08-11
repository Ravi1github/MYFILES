import React from 'react'
import { useHistory } from 'react-router-dom'

function Error() {
  const history=useHistory();
  return (
    <div>
      <h1>OOPs! no page is found</h1>
      <button onClick={()=>{ history.goBack()}}>Go back</button>
    </div>
  )
}

export default Error
