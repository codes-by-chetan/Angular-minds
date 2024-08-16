var a = "global";

if (true) {
    let a = "block"
    console.log("scope in block : ",a);
};

console.log("Scope outside block : ",a);