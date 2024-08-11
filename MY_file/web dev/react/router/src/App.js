import { Route,Switch } from "react-router-dom";
import MainHeader from "./component/MainHeader";
import Product from "./pages/Product";
import ProductDetailsBook from "./pages/ProductDetailsBook";
import ProductDetailsCarpet from "./pages/ProductDetailsCarpet";
import Welcome from "./pages/Welcome";
import Error from './component/Error'
import User from "./component/User";
import Search from "./component/Search";
//import Covid from "./component/Covid";

//and wrap the app.js inside the index.js wrap  with the BrowserRouter
function App() {
  return (
    <>
    {/* for routing */}
     <MainHeader/>
    <main>
      <Switch>
      <Route path='/welcome'>
        <Welcome/>
      </Route>
      <Route path='/product'>
        <Product/>
      </Route>
      <Route path='/productKaDetails/book'>
        <ProductDetailsBook/>
      </Route>
      <Route path='/productKaDetails/carpet'>
        <ProductDetailsCarpet/>
      </Route>
      <Route path='/search'>
        <Search/>
      </Route>

  {/* using params ->it is used to pass the keyvalue*/}
  <Route path='/user/:fname/:lname'><User/></Route>
  {/* error page */}
      <Route  >
        <Error/>
      </Route>
      </Switch>
    </main> 


    {/* for api */}
    {/* <Covid/> */}
    </>
  );
}

export default App;
