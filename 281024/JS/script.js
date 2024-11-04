function changeBg(){
    let change = document.getElementById("btnChangeBg")
    change.addEventListener("click", function(){
        document.querySelector("body>p").style.backgroundColor=("red");
    });
}