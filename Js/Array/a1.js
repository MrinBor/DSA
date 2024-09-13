console.log("Hello World")


console.log("\n\n\nARRAY")


/**v
 * 
 * It is not convenient to use an object here, because it provides no 
 * methods to manage the order of elements. We can’t insert a new 
 * property “between” the existing ones. Objects are just not meant for such use.
 * 
 */

//

let Arr = new Array()
let arr = []

Arr = ["Apple","Banana","Papaya"]


console.log("\n\n\n")
console.log(Arr[0])
console.log(Arr[1])
console.log(Arr[2])

console.log("\n\n\n")
for(let i=0;i<=2;i++){
    console.log(Arr[i])
}
var length = Arr.length

console.log("\n\n")
console.log(`The length of the ARRAY is -> ${length}`)




console.log("\n\n")



let Arr1 =["A1","A2","B1","B2"]

for(let i=0;i<Arr1.length;i++)
{
    console.log(Arr1[i]);
}


console.log("The homogeneous ARRAY")
let B = ['Apple',12,{Name:"Mrinmoy"},true,function(){ console.log("Hello There") }]

console.log(B[2].Name)
console.log(B[4])


console.log("\nThe Function\n")


let Fruits_1 = [
    "Apple",
    "Orange",
    "Plum",
]

console.log(Fruits_1)

