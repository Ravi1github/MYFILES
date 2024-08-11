import React from 'react'
import { Link } from 'react-router-dom'
function Navbar() {
  return (
    <div>
      

      <nav className="navbar navbar-expand-lg   navbar bg-succuess" data-bs-theme="dark" style={{backgroundColor:"rgb(69, 68, 68)", }}>
  <div className="container-fluid">
    <img src="../../images/logo.jpeg" alt=""style={{width:'100px'}} />
    <button className="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarNav" aria-controls="navbarNav" aria-expanded="false" aria-label="Toggle navigation">
      <span className="navbar-toggler-icon"></span>
    </button>
    <div className="collapse navbar-collapse" id="navbarNav">
      <ul className="navbar-nav navtitle" style={{margin:'auto'}}>
        <li className="nav-item ">
          <Link className="nav-link active" aria-current="page" to="/">Home</Link>
        </li>
        <li className="nav-item">
          <Link className="nav-link active" to="/about">About</Link>
        </li>
        <li className="nav-item">
          <Link className="nav-link active" to="/">Service</Link>
        </li>
        <li className="nav-item">
          <Link className="nav-link active" to="/">Gallery</Link>
        </li>
       
      </ul>
    </div>
  </div>
</nav>
    </div>
  )
}

export default Navbar
