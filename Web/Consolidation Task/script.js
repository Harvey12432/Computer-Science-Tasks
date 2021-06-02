const INPUT = document.getElementById("input");
const UNIT = document.getElementById("unit");
const RESULT = document.getElementById("result");
const CLEAR = document.getElementById("btn");
const OPTIONS = document.getElementsByTagName("option");
const TEXTUNIT = document.getElementsByTagName("span");

function controller(operation, input){
    let conversion;
    switch(operation){
        case "cm":
            conversion = input / 0.01;
            break;
        case "inches":
            conversion = input * 39.370;
            break;
        case "feet":
            conversion = input * 3.2808;
            break;
        case "yards":
            conversion = input * 1.0936;
            break;
        case "kilometers":
            conversion = input / 1000;
            break;
        case "miles":
            conversion = input * 0.00062137;
            break;
    }
    RESULT.value = conversion;
    TEXTUNIT[0].innerText = operation;
}


for(let i = 0; i < OPTIONS.length; i++){
    OPTIONS[i].addEventListener("click", function(){
        if(!isNaN(INPUT.value)){
            controller(OPTIONS[i].value, INPUT.value)
        } else {
            alert("Invalid Input, make sure your input is a number!");
        }
    })
}

CLEAR.addEventListener("click", function(){
    RESULT.value = "";
    TEXTUNIT[0].innerText = "";
})