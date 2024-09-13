//The numbber format in case of JAVA SCRIPT


/**
 * 
 * 
 * 
 * Regular numbers in JavaScript are stored in 64-bit format IEEE-754, also known as “double precision floating point numbers”. These are numbers that we’re using most of the time, and we’ll talk about them in this chapter.
 * 
 * The big Int number representation
 * 
 * The Big int range  +- ( 2^53 - 1 )
 * 
 * 
 */

let a = 1000000;
console.log(a);

let a1 = 1_00_000;
console.log(a1);

/**
 * ays the role of the “syntactic sugar”,
 * 
 *  it makes the number more readable. The JavaScript engine simply ignores _ between digits, so it’s exactly the same one billion as above.
 * 
 * The use of the synctactic Sugar
 */

let Billion   = 1e9;

console.log(Billion)


let b2 = 34.1e9
console.log(b2);


console.log(1e3 === 1*1000)
console.log(1.23e4 === 1.23*10000);


// setInterval(()=>{
//     console.log("Hello World");

//     console.log(randomInteger(1,5));
// },1000)



// function randomIteger(min,max)
// {
//     return Math.floor(Math.random()*(max - min +1)) + min ;
// }

// setInterval(()=>{
//     console.log(randomIteger(1,5));
// },1000);




// let  i = 0;
// while(i!=10)
// {
//     i+=0.2;
//     setInterval(()=>{
//         console.log(i);
//     })
// }


console.log(0xff);
console.log(0xFF);