import React from 'react'
import { Link } from 'react-router-dom'
import './mainheader.css'
export default function MainHeader() {
  return (
    <header className='header'>

        <nav>
<ul>

    <li>
        <Link to='/welcome'>Welcome</Link>
    </li>
    <li>
        <Link to='/product'>Product</Link>
    </li>
    <li>
        <Link to='/search'>Search</Link>
    </li>
    <li>
        <Link to='/user/ravi/kumar'>User</Link>
    </li>
</ul>

        </nav>
    </header>
  )
}
