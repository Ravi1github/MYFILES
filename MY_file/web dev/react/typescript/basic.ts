let age:number;
age=2;
let username:string='abc';
//for array
let hobbies:string[];
hobbies=['ccc','ddd'];
// creating type alias
type Person={
    name:string,
    age:number,
}



//object
//declaration of type
  let person:Person;
//defining
person={
  name:'dddd',
  age:22,
}

//for array of object
let persons:Person[];

    
    //then by default it become string type
    let course='react course'

    //for multiple type
    let abc: string|number|boolean="hii";
    abc=12;

//function type
                                     // return type
function adds(a: number , b: number) :number|string
{
    return a+b;
}


//generic

function insertbegin<T>(array:T[],value:T)
{ 
    //new value added in array
    const newAarray=[value,...array];
    return newAarray;
}
const demoarray=[1,2,3];
const updatedarray=insertbegin(demoarray,0); // [0,1,2,3]

