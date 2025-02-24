let game=[];
let user=[];
btn=["yellow","green",'red',"blue"]
let started=false;
let level =0;
let p=document.querySelector("p");
document.addEventListener("keypress",function(){
 if(started==false){
    alert("Game Started");
    started=true;
    levelUp();
 }
});
function flash(btn){
  btn.classList.add("white");
  setTimeout(function(){
    btn.classList.remove("white");
  },250);
      
  }

function levelUp(){
  user=[];
  level++;
  p.innerText=`level ${level}`;

  let randcol=Math.floor(Math.random() *3);
  let randcolor= btn[randcol];
  let randm=document.querySelector(`.${randcolor}`)
  game.push(randcolor);
  flash(randm);}

function checkans(indx){
  if(user[indx]==game[indx]){
  if(game.length=== user.length)
  {
    setTimeout(levelUp,1000);
  }}
  else{
    p.innerHTML=`Game over! your score was <b>${level}</b> <br> press any key to restart`
 document.querySelector("body").style.backgroundColor="red";
 setTimeout( function () {
  document.querySelector("body").style.backgroundColor="white";
 },150)
 reset();
}

}



function clickbtn(){
  let btn=this;
  flash(btn);
 let usercolor = btn.getAttribute("id");
 user.push(usercolor);
 checkans(user.length-1);
}
let buttons=document.querySelectorAll(".btn");
for(button of buttons)
{
button.addEventListener("click",clickbtn);}


  function reset(){
    started=0;
    user=[];
    game=[];
    level=0;
  }
