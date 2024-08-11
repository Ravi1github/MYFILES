import React from 'react'
import './Achivement.css'
import Swing from 'react-reveal/Swing';
import Spin from 'react-reveal/Spin';

function Achievement() {
  return (
    <>
      <div className="continer project" id="project">
        <Spin>
        <h2 className="col-12 mt-3 mb-1 text-center text-uppercase">
          MY Achievement
        </h2>
        </Spin>
        <hr />
        
        {/* card design */}
        <div className="row" id="ads">
          <Swing >
            <div className="col-md-4">
              <div className="card rounded">
                <div className="card-image">
                
                  <img
                    src="https://th.bing.com/th/id/OIP.E-791_O5cIGGMc6OkPwI1wHaEK?rs=1&pid=ImgDetMain"
                    alt="project1"
                  />
                </div>
                <div className="card-image-overly m-auto mt-3">
                  <span className="card-detail-badge " color='! important white'>Achieved a 3-star 🌟 rating on CodeChef</span>
                  
                </div>
                <div className="card-body text-center">
                  <div className="ad-title m-auto">
                    <h6 className="">
                     CodeChef
                    </h6>
                  </div>
                  <a
                    className="ad-btn"
                     
                    href="https://www.codechef.com/users/ravikumar_0041" target="_blank" rel="noopener noreferrer"
                  >
                    View
                  </a>
                </div>
              </div>
            </div>



            <div className="col-md-4">
              <div className="card rounded">
                <div className="card-image">
                
                  <img
                    src="https://th.bing.com/th/id/OIP.DENauUixUf2DS-VfgKCXlAHaD2?rs=1&pid=ImgDetMain"
                    alt="project1"
                  />
                </div>
                <div className="card-image-overly m-auto mt-3">
                  <span className="card-detail-badge " color='! important white'>Leetcode rating : 1734 , among 10% of top global coder</span>
                  
                </div>
                <div className="card-body text-center">
                  <div className="ad-title m-auto">
                    <h6 className="">
                     LeetCode
                    </h6>
                  </div>
                  <a
                    className="ad-btn"
                     
                    href="https://leetcode.com/u/ravi_041/" target="_blank" rel="noopener noreferrer"
                  >
                    View
                  </a>
                </div>
              </div>
            </div>


            <div className="col-md-4">
              <div className="card rounded">
                <div className="card-image">
                
                  <img
                    src="https://th.bing.com/th/id/OIP.QHiGLz1uCoGCJc8FdE_aDAHaDT?rs=1&pid=ImgDetMain"
                    alt="project1"
                  />
                </div>
                <div className="card-image-overly m-auto mt-3">
                  <span className="card-detail-badge " color='! important white'>
                  Achieved a 5-star 🌟 rating on HackerRank
                  </span>
                  
                </div>
                <div className="card-body text-center">
                  <div className="ad-title m-auto">
                    <h6 className="">
                     HackerRank
                    </h6>
                  </div>
                  <a
                    className="ad-btn"
                     
                    href="https://www.hackerrank.com/dashboard" target="_blank" rel="noopener noreferrer"
                  >
                    View
                  </a>
                </div>
              </div>
            </div>


            










            </Swing>
        </div>  
      </div>
     
    </>
  )
}

export default Achievement
