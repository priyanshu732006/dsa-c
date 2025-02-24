 let inp=document.querySelector("input");
 let btn=document.querySelector("button");
 let ul=document.querySelector("ul");
 let li=document.querySelectorAll("li");
btn.addEventListener("click",function(){
  
   let item=document.createElement("li");
   let delbt=document.createElement("button");
   
      delbt.innerText="delete";
      delbt.classList.add(".delete");
      item.innerText=inp.value;
      ul.appendChild(item);
      item.appendChild(delbt);
      inp.value="";
})
//  let del=document.querySelectorAll(".delete");
//  for(btns of del){
//     btns.addEventListener("click",function(){
//         let parent =this.parentElement;
//         parent.remove();
//  });}
 
 ul.addEventListener("click",function(event){
    if( event.target.nodeName=="BUTTON")
       {
      let  list= event.target.parentElement;
      list.remove();
       }

    })

