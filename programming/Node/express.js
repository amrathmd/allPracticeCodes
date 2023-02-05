const express = require('express');
const path=require('path');
const app=express();

app.get('/',(req,res)=>{
    res.sendFile(path.join(__dirname,'index.html'));
});
app.get('/about',(req,res)=>{
    res.sendFile('./docs/index.html',{root:__dirname});
})
app.get('/about-me',(req,res)=>{
    res.redirect('/about');
})
app.use((req,res)=>{
    res.status(404).sendFile('./docs/404Err.html',{root:__dirname});
})
app.listen(3001);
