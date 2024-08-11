const express = require("express");
const app = express();
//requring router
const studentRouter=require("./router/student");
const port = process.env.PORT || 3000;
//connection of database from db folder
require('./db/connection');

// requiring student collection
require("./model/students");


//it recoginsed the incoming request object as a json format
app.use(express.json());
 

//using router
app.use(studentRouter);

app.listen(port, () => {
    console.log("server is running at port");
});

