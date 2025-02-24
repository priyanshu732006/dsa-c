// // // console.log("hello");
// // //  let c=5;
// // //  let b=4;
// // //  output=`the sum is ${c+b} rupees`;
// // // console.log(output);
// // // let string="app"
// // // if( string.length>3 && string[0]==='a'){
// // //     console.log("good string");
// // // }
// // // else{
// // //     console.log("invalid")
// // // }
// // //  let str ="pradyumn";
// // //   let u=str.toUpperCase();
// // // console.log(u);
// // //  let l=str.toLowerCase() ;
// // // console.log(l);

// // // let strf="pradyumn";
// // // console.log(strf);
// // // strf=strf.replace("m","p");
// // // console .log(strf)
 
// //  function min(...args){
// //     return args.reduce((min, el) =>{
// //         console.log(min, el);
// //         if( min>el){
// //             return el;}
// //         else{
// //         return min;}
// //     });
// //  } 

// let para = document.createElement('p');
// para.innerText="hey  i am ready";
// document.querySelector('body').append(para)
// para.classList.add('red');
// let head =document.createElement('h3');
// head.innerText="i am blue";
// document.querySelector('body').append(head);
// head.classList.add('blue');
// let div = document.createElement('div');
// document.querySelector('body').append(div)
// div.classList.add('div');
// let h1 = document.createElement('h1');
// let par = document.createElement('p');
//  h1.innerText="i am  in a div ";
//  par.innerText=" me too";
//   div.append( h1)
//   div.append( par)
//  let btn= document.querySelector('button');
//  btn.addEventListener("click",function (){
//     console.log("clisked")});
//     btn.addEventListener("click",v);
    
 
//  function  v(){
//  console.log("click");
//  }

// ***********************

let btn=document.addEventListener("click",function(){
    let h3=document.querySelector("h3");
     h3.innerText=getcolor();
     let div=document.querySelector("div");
     div.style.backgroundColor=getcolor()
});


function getcolor(){
    let red=Math.floor(Math.random()*255);
    let green=Math.floor(Math.random()*255);
    let blue=Math.floor(Math.random()*255);
     let color =`rgb(${red},${green},${blue})`;
     return color;
}
// let box=document.querySelector(".box");
// box.addEventListener("click",function(){
//     console.log("ram ram")
//      alert("ram ram");
// });
// let inp=document.querySelector("input");
// inp.addEventListener("keydown",function(event){
//     console.log("code=",event.code);
//     if(event.code=="ArrowUp")
//     { console.log("move forward");}
//     else if(event.code=="ArrowDown")
//     { console.log("move forward");}
//     else if(event.code=="ArrowRigth")
//     { console.log("move right");}
//     else if(event.code=="ArrowLeft")
//     { console.log("move left");}
// });

// // ************************************************************* calll back**********
//  h1=document.querySelector("h1");
//  function changeColor(color,delay,nextcolor){
//     console.log("change");
//     setTimeout( ()=>{
//   h1.style.color=color;
//   if(nextcolor) nextcolor();
//  },delay);
// }


// changeColor("red",1000,()=>{
//     changeColor("yellow ",2000,()=>{
//         changeColor("blue",3000)
//     });
// });
// ***********************************************by using promise**********************
// h1 =document.querySelector("h1");
// function changeColor(color,delay){
//     return new Promise((resolve, reject) => {
//         console.log("change");
//         setTimeout( ()=>{
//       h1.style.color=color;
//       resolve("color changed");
//      },delay);
//     })
// }
// changeColor("red",1000)
// .then(()=>{
//     console.log("red");
//     return changeColor("blue",1000);
// })
// .then(()=>{
// console.log("yellow")
// return changeColor("yellow",1000);
// })