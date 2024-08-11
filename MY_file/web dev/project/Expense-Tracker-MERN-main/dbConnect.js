const mongoose = require('mongoose');
require('dotenv').config();
const dbURL = process.env.MONGO_URL;
mongoose.set('strictQuery', true);
mongoose.connect(dbURL, { 
  useNewUrlParser: true, useUnifiedTopology: true,useCreateIndex: true
  
 });

const connection = mongoose.connection;

connection.on('error', (err) => console.log(err));

connection.on('connected', () =>
  console.log('Mongo DB Connection Successfull')
);
