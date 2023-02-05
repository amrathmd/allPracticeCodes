const http=require('http');
const fs=require('fs');
const server=http.createServer((req,res)=>{
    console.log(req.method,req.url);//request methods
    

    /*res.setHeader('Content-Type','text/html');//text/plain
    res.write('<h1>Amrath</h1>');
    console.log(res.getHeader())    
    */
    fs.readFile('./docs/index.html',(err,data)=>{
        if(err){
            console.log(err);
            res.end();
        }
        else{
            res.setHeader('Context-Type','text/html');
            res.write(data.toString());
            res.end();
        }
    })
})
server.listen('4002'/*portNo*/,'localhost',()=>{
    console.log('listening request from port 3000 from localhost');
});
