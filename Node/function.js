function foo(){
    return 123;
}

console.log(foo());

(function foo(){
    console.log("Immediate execution");
})();

var foo = 123;
if (true){
    var foo = 456;
}
console.log(foo);

var foo = 123;
if (true){
    (function(){ // creating new scope
        var foo = 456;
    })();
}

console.log(foo); 