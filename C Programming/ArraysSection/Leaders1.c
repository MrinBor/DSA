void findLeaders(int arr[], int n)
{
    int *Leader = (int *)malloc(n * sizeof(int));
    if (Leader == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    int counter = 0;
    int max = arr[n - 1];
    Leader[counter++] = max;

    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            Leader[counter++] = max;
        }
    }

    printf("\nThe leaders in the array are:\n");
    for (int i = 0; i < counter; i++)
    {
        printf("%d ", Leader[i]);
    }
    printf("\n");

    free(Leader);
}

// class Solution
// {
//     // Function to find the leaders in the array.
// public:
//     vector<int> leaders(int n, int arr[])
//     {
//         vector<int> Leader;
//         int max = arr[n - 1];
//         Leader.push_back(max);

//         for (int i = n - 2; i >= 0; i--)
//         {
//             if (arr[i] >= max)
//             {
//                 max = arr[i];
//                 Leader.push_back(max);
//             }
//         }

//         reverse(Leader.begin(), Leader.end());
//         return Leader;
//     }