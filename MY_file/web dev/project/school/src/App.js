
import './App.css';
import Navbar from '../src/component/Navbar'
import {BrowserRouter as Router , Routes,Route } from 'react-router-dom';
import About from './component/About';
import Home from './component/Home';
function App() {
  return (
    <div className="App">
      <Router>
        <div>
          <div>{<Navbar/>}</div>
      <Routes>
      <Route  exact path='/' element={<Home/>} />
      <Route  exact path='/about' element={<About/>} />
      </Routes>
      </div>
      </Router>
    </div>
  );
}

export default App;

