const fs=require('fs');
const readStream=fs.createReadStream('./docs/doc2.txt');
readStream.on('data',(chunk)=>{
    console.log("____newBUffer____");
    console.log(chunk)
})
const writeStream=fs.createWriteStream('docs/doc3.txt');
readStream.on('data',(chunk)=>{
    writeStream.write("newBUffer______")
    writeStream.write(chunk);
    console.log('written');
})
//above process can be done by piping
readStream.pipe(writeStream);