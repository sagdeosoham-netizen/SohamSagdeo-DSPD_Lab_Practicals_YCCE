#include <stdio.h>

int binary_search(int arr[], int n, int data);

int main()
{
    int n, key, i;
    int arr[100]; 

    printf("\n Enter the size of array: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid size!\n");
        return 0;
    }

    printf("\n Enter the elements [Sorted]: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n Enter value to search: ");
    scanf("%d", &key);

    int result = binary_search(arr, n, key);

    if (result == -1)
    {
        printf("Invalid input!\n");
    }
    else
    {
        printf("Search result: %s\n", result ? "true" : "false");
    }

    return 0;
}

int binary_search(int arr[], int n, int data)
{
    if (arr == NULL || n <= 0)
    {
        return -1;
    }

    int l = 0, mid = 0;
    int r = n - 1;

    while (l <= r)
    {
        mid = (l + r) / 2;
        printf("Middle value: %d\n", arr[mid]);

        if (arr[mid] == data)
        {
            return 1;
        }
        else if (arr[mid] < data)
        {
            l = mid + 1;
            printf("Moving start to index: %d\n", l);
        }
        else
        {
            r = mid - 1;
            printf("Moving end to index: %d\n", r);
        }
    }

    return 0;
}
