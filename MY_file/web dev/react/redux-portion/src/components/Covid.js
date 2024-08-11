import { useEffect } from "react";


const Covid = () => {
  const getCoviddata=async()=>{
    //fetching from api
    let result=await fetch('https://api.covid19india.org/data.json');
    //convert it into object
    result=await result.json();
    console.log(result.statewise);
  }


  //run only one times when page open
  useEffect(()=>{
getCoviddata();
  },[])
  return (
    <>
    <h1>covid</h1>
    </>
  );
};

export default Covid;
