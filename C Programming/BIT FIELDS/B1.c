# include<stdio.h>
# include<malloc.h>


typedef struct ControlRegister
{
    unsigned int enabledevice:1 ;                                                  //Either values Bit 0
    unsigned int b:1 ;                                                  //Either of the values   it has a bit value of 2
    unsigned int c:1 ;                                                  //it has a bit value of 3
    unsigned int resetDevice:1;
    unsigned int interruptEnable:1;                                                  //Enabling the special mechanism
    unsigned int modeSelect:27; 
    unsigned int enableTx : 1;
    unsigned int enableRx = 25;
    
    
                                                     //It will have bit 3 or four 5-31 reserved bits
 
    //Bit 0 enable devices bit 
    //Enable or disable the device 
    //Re using the device

}cr7;




int main()
{

    //Declare a control register
    //We can perform the following for it

    cr7 controlReg = { 0 };
    controlReg.enabledevice = 1;
    controlReg.modeSelect = 3;


//The controlled register
//We will have the following


    return 0;
}


//Practical examples using bit fields
//In case of the embedded systems
/**
 * @brief 
 * 
 * 32 bit value
 * 
 * Set of bits in case of the registers
 * 
 * Controlled registers using the bit fields
 * 
 * 32-bit control register
 * 
 * 
 */

// Every field can store values based on its size only

// Explanation of the particular code

//Bit fields the element of a structure

// Small amount of information that takes only bits
// Bit fields allow us to use exactly the amount of memory required
// No of bits a particular structure member should use
// Bits are useful in packing data
// Bit Fields are as follows
