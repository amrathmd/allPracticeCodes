const os=require('os');
console.log(os);
os.getPriority(1,(data=>{
    console.log(data);
}))