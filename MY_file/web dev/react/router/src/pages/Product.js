import React from 'react'

import { Link } from 'react-router-dom'

export default function Product() {
  return (
 
    <section>
    <h2>Product pages </h2>
    <ul>
        <li><Link to='/productKaDetails/book' >Product Book</Link></li>
        <li><Link to='/productKaDetails/carpet' >Product Carpet</Link></li>
        <li><Link to='/productKaDetails' >Product Online course</Link></li>
    </ul>
    </section>




   

  )
}
