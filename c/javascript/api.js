let url ="https://dog.ceo/api/breeds/image/random";
let btn= document.querySelector("button")
btn.addEventListener("click",async ()=>{
   let link=  await getpic()
   let img = document.querySelector("#image")
   img.setAttribute("src",link)
}
)

async function getpic () {
    try{
        let res= await axios.get(url)
        console.log(res.data.message)
    }
    catch(err){
        console.log("error--",err)
    }
}