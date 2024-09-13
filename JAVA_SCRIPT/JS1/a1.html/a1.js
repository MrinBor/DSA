

let John = {
    Name:"John",
    sayHi:function()
    {
        console.log("Hi Buddy!! ");
    },
}


let Fucntion2 = {
    Name:"Mrinmoy",
    sayHello:function()
    {
        console.log("Hello World");
    }
}


John.sayHi();

Fucntion2.sayHello();


//Say we will have the following

let str1 = "Hello World";
console.log(str1.toUpperCase());


let num1 = 1.23121;
console.log(num1.toFixed(2));


//The to fixed value would be 1.23


///The beahviour of the JavaScript

console.log(typeof (1));//Numebr
console.log(typeof new Number(1))//Object

/**
 * Primitives
 */


// Addition of the string property

let str = 11;
str.test = 100;

console.log(str.test);//Undefined in case of strict mode



