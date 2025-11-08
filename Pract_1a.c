#include <stdio.h>
int main()
{
    int arr[100], size, i;
    int Sum_even = 0, Sum_odd = 0;
    printf("\n Enter the size of array: ");
    scanf("%d", &size);
    printf("\n Enter [%d] element: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++) {
        if (i % 2 == 0) {
            Sum_even += arr[i];
        } else {
            Sum_odd += arr[i];
        }
    }
    printf("\n Sum of elements at even positions: %d", Sum_even);
    printf("\n Sum of elements at odd positions: %d", Sum_odd);
    return 0;
}