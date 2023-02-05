const http=require('http');
const fs=require('fs');
const server=http.createServer((req,res)=>{
    console.log(req.method,req.url);
    let path='./docs/'
    switch (req.url){
        case '/':
            path+='index.html';
            res.status=201;
            break;
        case '/about':
            path+='about.html';
            res.status=201;
            break;
        case '/about-me':
            res.status=301;//redirect;
            res.setHeader('Location','/about');
            break;
        default:
            res.status=404;
            path+='404Err.html';
        }
        fs.readFile(path,(err,data)=>{
            if(err){
                console.log(err);
                res.end();
            }
            else{
                res.setHeader('Content-Type','text/html');
                res.write(data);
                //console.log(res.getHeader());
                res.end();
            }
        })
})
server.listen('4002','localhost',()=>{
    console.log("listening on port 4002 in the localhost");
})