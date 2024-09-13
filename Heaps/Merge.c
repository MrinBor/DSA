# include<stdio.h>
# include<malloc.h>


void Merge(int arr[],int p,int q,int r);
void Merge_Sort(int arr[],int p,int r)
{
    int q=(p+r)/2;
    Merge_Sort(arr,p,q);
    Merge_Sort(arr,q+1,r);
    Merge(arr,p,q,r);
}

void Merge(int arr[],int p, int q,int r)
{
    int n1=q-p+1;
    int n2=r-q;
    int i,j;

    int arr1[n1],arr2[n2];

    for(i=0;i<=n1;i++)
    {
        arr[i]=arr[p+i-1];
    } 

    for(j=0;j<=n2;j++)
    {
        arr[j]=arr[q+j];
    }

    arr[i+1]=10000;
    arr[j+1]=10000;

    int i1=0;
    int j1=0;

    for(int k=p;k<r;k++)
    {
        if(arr1[i1]<arr2[j1])
        {
            arr[k]=arr1[i1];
            i1++;
        }
        else{
            arr[k]=arr2[j1];
            j1++;
        }
    }
}

int main()
{
    int arr[5]={1,4,3,2,5};


    printf("\n\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }


    Merge_Sort(arr,0,5);



    printf("\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}