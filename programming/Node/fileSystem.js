const fs=require('fs');
//writing on a file;
if(!fs.existsSync('./docs/doc1.txt')){
    fs.writeFile('./docs/doc1.txt',"helloworld",()=>{
        console.log('written');
    });
}
else{
    console.log("File already exists")
}
//reading a file
fs.readFile('./docs/doc1.txt',(err,data)=>{
    if(err) console.log(err);
    console.log(data);
    console.log(data.toString());//buffer;
})
//creating and deletting direcroties
if(!fs.existsSync('./Assets')){
    fs.mkdir('./Assets',(err)=>{
        if(err) console.log(err);
        console.log('Directory created');
    })
}
else{
    fs.rmdir('./Assets',(err)=>{
        if(err) console.log(err);
        console.log('file Removed');
    })
}
