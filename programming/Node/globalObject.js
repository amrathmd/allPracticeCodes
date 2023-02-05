console.log(global);
setTimeout(()=>{//Async
    console.log("in Timeout");
    clearInterval(int);
},3000);
const int=setInterval(() => {//Async
    console.log("in interval");
}, 1000);
console.log(__dirname);
console.log(__filename);