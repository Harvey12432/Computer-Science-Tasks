const INPUT = document.getElementById("input");
const RESULT = document.getElementById("result");
const CLEAR = document.getElementById("btn");
const TEXTUNIT = document.getElementsByTagName("span");
const DROPDOWN = document.getElementsByTagName("select");

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

console.log(DROPDOWN);
DROPDOWN[0].addEventListener("change", function(){
    controller(this.value, INPUT.value);
});

CLEAR.addEventListener("click", function(){
    RESULT.value = "";
    TEXTUNIT[0].innerText = "";
})