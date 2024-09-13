console.log("The timers in Java Script")

//Set timer ->> 


//Set timeout ->. they will retirn a  callback fucntions


const Ingredient = ['Olive','Spinach']//... rEFERS OT HE SPREA OPERATIOR

setTimeout((ing1,ing2)=>console.log(`Here is your Pizza eith the ingredients as  ingredients as ${ing1} and ${ing2}`),3000,'Plive',"Spinaxh")
setTimeout((ing1,ing2)=>console.log(`Here is your Pizza eith the ingredients as  ingredients as ${ing1} and ${ing2}`),3000,...Ingredient)



console.log("Waiting ... ")


// We can also cancel t etmer when t edelay has already passed


// CNCELLINGTHE TIMER

/**
 * 
 * This is  to as async java script
 * 
 * 
 */

// Se tiemout will cll thye callback funciton to tyh3 fututre
// Assigning the valus to the time out fucntions


const PizzaTimer = setTimeout(
    (ing1,ing2)=>console.log(`Here is your Pizzxa with ${ing1} and ${ing2}`),
    10000,
    ...Ingredient
)
console.log("Waiting ... ")

if(Ingredient.includes('Spinach')) clearTimeout
(PizzaTimer)


/**
 * We we need to execute a fucntipon again and again then we will use th eset timeoput nfucntion
 * 
 */


setInterval(function(){
    const now = new Date();
    console.log(now)
},10)