#include <stdio.h>
#include <stdlib.h>

// Structure to represent activities
struct Activity
{
    int start;
    int finish;
};

// Function to compare activities based on their finish times
int compare(const void *a, const void *b)
{
    return ((struct Activity *)a)->finish - ((struct Activity *)b)->finish;
}

// Function to perform activity selection
void Activity_Selection(struct Activity arr[], int n)
{
    // Sort activities based on their finish times
    qsort(arr, n, sizeof(struct Activity), compare);

    // The first activity is always selected
    printf("Selected activity: 0 (start time: %d, finish time: %d)\n", arr[0].start, arr[0].finish);

    int i = 0;

    // Consider the rest of the activities
    for (int j = 1; j < n; j++)
    {
        // If this activity has a start time greater than or equal to the finish time of the previous activity, select it
        if (arr[j].start >= arr[i].finish)
        {
            printf("Selected activity: %d (start time: %d, finish time: %d)\n", j, arr[j].start, arr[j].finish);
            i = j;
        }
    }
}

int main()
{
    int n;
    printf("Enter the number of activities: ");
    scanf("%d", &n);

    struct Activity *activities = (struct Activity *)malloc(n * sizeof(struct Activity));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the start time for activity %d: ", i);
        scanf("%d", &activities[i].start);
        printf("Enter the finish time for activity %d: ", i);
        scanf("%d", &activities[i].finish);
    }

    printf("Activities selected:\n");
    Activity_Selection(activities, n);

    free(activities); // free the dynamically allocated memory

    return 0;
}
