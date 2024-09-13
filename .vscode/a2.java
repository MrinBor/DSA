import java.util.Scanner;
import java.util.*;



//The traversal of the elemt s

class Evaluate
{
    void Separate(int a,int b)
    {

        int MID=(a+b)/2;

    }
}


public class a2 

{

        static int Search(int []nums,int target)
        {
            int start=0;
            int end=nums.length-1;


            while(start<=end)
            {
                int mid=(start+end)/2;


                if(nums[mid]==target)
                {
                    return mid;
                }

                if(nums[start]<=nums[mid])
                {
                    if(nums[start]<=target && target <=nums[mid])
                    {
                        end=mid-1;
                    }
                    else
                    {
                        start=mid+1;
                    }
                }
            }

        }
    public static void main(String args[])
    {



        int a;
        //Majorityb element 
        /**
         * Binary searrch algorithms
         * Binary Search
         * 
         */

         //Binary search im a rotated array
         /**
          *
          Given array is ->> 
          
          The sorted and rotated array

          4,5,6,7,0,1,2

          0,1,2,4,5,6,7

          Rotating the array by three 

          Shifting all the elemtnsd in left in the left direction


          4 left turns <-- 



          */

    }
}
