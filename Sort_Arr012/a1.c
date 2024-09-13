# include<stdio.h>



int main()
{
    int a;
    scanf("%d",&a);

    int arr[a];

    for (int i = 0; i < a; i++)
    {
        scanf("%d",&arr[i]);
        /* code */
    }

    printf("[");
    for (int i = 0; i < a; i++)
    {
        printf(" %d ",arr[i]);
        /* code */
    }
    printf("]");

    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;

    for (int i = 0; i < a; i++)
    {
        if(arr[i] == 0)
        {
            cnt0++;
        }
        else if(arr[i] == 1)
        {
            cnt1++;
        }
        else if(arr[i] == 2)
        {
            cnt2++;
        }
        /* code */
    }


    for (int i = 0; i < cnt0; i++)
    {
        arr[i] = 0;
        /* code */
    }

    for (int i = cnt0; i < cnt0+cnt1; i++)
    {
        arr[i] = 1;
        /* code */
    }

    for(int i = cnt0 + cnt1;i<a;i++)
    {
        arr[i] = 2;
    }

    printf("[");
    for (int i = 0; i < a; i++)
    {
        printf(" %d ", arr[i]);
        /* code */
    }
    printf("]");
}


//Sort 0 1 and 2

// @brief Sort an array of  0 ' s and 1 's


/**
 * @brief 
 * The complexity will be betterment of 1
 * 
 */
 
// @return
/**
 * @brief 
 * Time complexity  ->> NlogN
 * 
 * Space Complexity ->> N
 * 
 */