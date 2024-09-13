// // console.log(Math.random());

// // setInterval(()=>{
// //     console.log(Math.random());
// // },10)
// console.log( +"100px" ); // NaN



// console.log( parseInt('100px') ); // 100
// console.log( parseFloat('12.5em') ); // 12.5

// console.log( parseInt('12.3') ); // 12, only the integer part is returned
// console.log( parseFloat('12.3.4') ); 

// console.log("Hello World");
// console.log("My name is Mrinmoy Bordoloi ")
//Onject

/**
 * Comparison with Object.is
There is a special built-in method Object.is that compares values like ===, but is more reliable for two edge cases:

It works with NaN: Object.is(NaN, NaN) === true, that’s a good thing.
Values 0 and -0 are different: Object.is(0, -0) === false, technically that’s correct because internally the number has a sign bit that may be different even if all other bits are zeroes.
In all other cases, Object.is(a, b) is the same as a === b.

We mention Object.is here, because it’s often used in JavaScript specification. When an internal algorithm needs to compare two values for being exactly the same, it uses Object.is (internally called SameValue).
 */



// console.log( Math.max(3, 5, -10, 0, 1) ); // 5
// console.log( Math.min(1, 2) ); // 1


/**
 * Numeric conversion using a plus + or Number() is strict. If a value is not exactly a number, it fails:

alert( +"100px" ); // NaN
The sole exception is spaces at the beginning or at the end of the string, as they are ignored.

But in real life, we often have values in units, like "100px" or "12pt" in CSS. Also in many countries, the currency symbol goes after the amount, so we have "19€" and would like to extract a numeric value out of that.

That’s what parseInt and parseFloat are for.

They “read” a number from a string until they can’t. In case of an error, the gathered number is returned. The function parseInt returns an integer, whilst parseFloat will return a floating-point number:

alert( parseInt('100px') ); // 100
alert( parseFloat('12.5em') ); // 12.5

alert( parseInt('12.3') ); // 12, only the integer part is returned
alert( parseFloat('12.3.4') ); // 12.3, the second point stops the reading
There are situations when parseInt/parseFloat will
 */


//Now we will have the following

// function createHelloWorld() {
//   return function() {
//     return "Hello World";
//   };
// }

// // Example usage:
// const f = createHelloWorld();
// console.log(f()); // "Hello World"
// console.log(f({}, null, 42)); // "Hello World"


function createCounter(n) {
  let count = n; // Initialize the counter with n
  return function() {
    return count++; // Return the current value and then increment it
  };
}

let a1 = createCounter(10);
console.log(a1());
console.log(a1());
console.log(a1());
console.log(a1());