import React from 'react'
import './Projects.css'
import Swing from 'react-reveal/Swing';
import Spin from 'react-reveal/Spin';
import weaimg from '../../assets/docs/weatherr.jpg';
import expense from '../../assets/docs/exoense.webp'
function Project() {
  return (
    <>
      <div className="continer project" id="project">
        <Spin>
        <h2 className="col-12 mt-3 mb-1 text-center text-uppercase">
          TOP RECENT PROJECTS
        </h2>
        </Spin>
        <hr />
        
        {/* card design */}
        <div className="row" id="ads">
          <Swing >
            <div className="col-md-4">
              <div className="card rounded">
                <div className="card-image">
                  <span className="card-notify-badge">Food Ordering</span>
                  <img
                    src="https://cdn.dribbble.com/users/1041810/screenshots/10824496/media/978ffbd31c373622a648f0362e0e7ad9.png"
                    alt="project1"
                  />
                </div>
                <div className="card-image-overly m-auto mt-3">
                  <span className="card-detail-badge">Node</span>
                  <span className="card-detail-badge">Express</span>
                  <span className="card-detail-badge">react</span>
                  <span className="card-detail-badge">Mongodb</span>
                </div>
                <div className="card-body text-center">
                  <div className="ad-title m-auto">
                    <h6 className="text-uppercase">
                     Food ordering App
                    </h6>
                  </div>
                  <a
                    className="ad-btn"
                    href="https://food0rdering.azurewebsites.net/" target="_blank" rel="noopener noreferrer"
                  >
                    View
                  </a>
                </div>
              </div>
            </div>
            <div className="col-md-4">
              <div className="card rounded">
                <div className="card-image">
                  <span className="card-notify-badge">Weather App</span>
                  <img
                    src={weaimg}
                    alt="project2"
                  />
                </div>
                <div className="card-image-overly m-auto mt-3">
                  <span className="card-detail-badge">Node</span>

                  <span className="card-detail-badge">HTML</span>
                  <span className="card-detail-badge">CSS</span>
                  <span className="card-detail-badge">Javascript</span>
                </div>
                <div className="card-body text-center">
                  <div className="ad-title m-auto">
                    <h5 className="text-uppercase">Weather App</h5>
                  </div>
                  <a
                    className="ad-btn"
                    href="https://weatherapp041.netlify.app/" target="_blank" rel="noopener noreferrer"
                  >
                    View
                  </a>
                </div>
              </div>
            </div>
            <div className="col-md-4">
              <div className="card rounded">
                <div className="card-image">
                  <span className="card-notify-badge">Portfolio</span>
                  <img
                    src="https://thumbs.dreamstime.com/b/portfolio-concept-laptop-screen-d-modern-meeting-hall-showing-landing-page-text-closeup-view-blurred-image-81977143.jpg"
                    alt="project1"
                  />
                </div>
                <div className="card-image-overly m-auto mt-3">
                  <span className="card-detail-badge">Node</span>
                  <span className="card-detail-badge">Express</span>
                  <span className="card-detail-badge">MongoDb</span>
                  <span className="card-detail-badge">React</span>
                </div>
                <div className="card-body text-center">
                  <div className="ad-title m-auto">
                    <h5 className="text-uppercase">My Portfolio</h5>
                  </div>
                  <a className="ad-btn" href="/"  target="_blank" rel="noopener noreferrer"> 
                    View
                  </a>
                </div>
              </div>
            </div>


            <div className="col-md-4">
              <div className="card rounded">
                <div className="card-image">
                  <span className="card-notify-badge">Expense Tracker Application</span>
                  <img
                    src={expense}
                    alt="project1"
                  />
                </div>
                <div className="card-image-overly m-auto mt-3">
                  <span className="card-detail-badge">Node</span>
                  <span className="card-detail-badge">Express</span>
                  <span className="card-detail-badge">MongoDb</span>
                  <span className="card-detail-badge">React</span>
                </div>
                <div className="card-body text-center">
                  <div className="ad-title m-auto">
                    <h5 className="text-uppercase">Expense tracker</h5>
                  </div>
                  <a className="ad-btn" href="https://myexpensetracker-l20c.onrender.com/login"  target="_blank" rel="noopener noreferrer"> 
                    View
                  </a>
                </div>
              </div>
            </div>




            <div className="col-md-4">
              <div className="card rounded">
                <div className="card-image">
                  <span className="card-notify-badge">GYM</span>
                  <img
                    src="https://th.bing.com/th/id/OIP.xjZ3VDWsHKwiGOlBO3WJ7wHaE8?w=642&h=428&rs=1&pid=ImgDetMain"
                    alt="project2"
                  />
                </div>
                <div className="card-image-overly m-auto mt-3">
                  <span className="card-detail-badge">Node</span>

                  <span className="card-detail-badge">HTML</span>
                  <span className="card-detail-badge">CSS</span>
                  <span className="card-detail-badge">Javascript</span>
                </div>
                <div className="card-body text-center">
                  <div className="ad-title m-auto">
                    <h5 className="text-uppercase">GYM Project</h5>
                  </div>
                  <a
                    className="ad-btn"
                    href="https://gymproject-2.onrender.com" target="_blank" rel="noopener noreferrer"
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

export default Project
