const redux=require('redux');
//reducer function            //initialising state
function counterReducer(state={counter:0},action){
   if(action.type==='increment')
   {
    return  {counter: state.counter+1,}
   }
   if(action.type==='decrement')
   {
    return {counter: state.counter-1,}

   }

   else return state;

}
//storing
const store=redux.createStore(counterReducer);

console.log(store.getState());


const  counterSubscribe=()=>{
    //getting data
    const lateststate=store.getState();
    console.log(lateststate);
}
//calling function
store.subscribe(counterSubscribe);
//dispatch action
store.dispatch({type:'increment'});
store.dispatch({type:'decrement'});