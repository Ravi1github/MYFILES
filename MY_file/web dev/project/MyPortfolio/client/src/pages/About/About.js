import React from "react";
import "./About.css";
import imagepic from '../../assets/docs/DSC_5668.JPG'
import RubberBand from "react-reveal/RubberBand";
import Fade from "react-reveal/Fade";
const About = () => {
  return (
    <>
      <>
        <div className="about" id="about">
          <div className="row">
            <div className="col-md-6 col-xl-6 col-lg-6 col-xs-12 about-img">
              <Fade top>
              <img
                src={imagepic}
                alt="profile_pic"
               
              />  </Fade>
            </div>
            <div className="col-md-6 col-xl-6 col-lg-6 col-xs-12 about-content">
              <RubberBand>
              <h1>About me</h1>
              </RubberBand>
              <Fade top>
              <p className='para'> Hello Myself <span>Ravi Kumar</span> currently pursuing B.tech in <span>Computer Science &Engineering  </span> in IIIT Bhubaneswar ,I am  <span> MERN Stack Developer</span>, I excel in creating  web applications using MongoDB, Express.js, React.js, and Node.js. I deliver projects that blend innovative design with robust functionality, ensuring a compelling user experience. I also having  depth knowledge of <span>Data Structure & Algorithms</span></p> </Fade>
            </div>
            
          </div>
        </div>
      </>
    </>
  );
};

export default About;
