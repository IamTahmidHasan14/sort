#include <stdio.h>
int main()
{
    int i, first, last, mid, n, s, array[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    for (i=0; i<n; i++)
        scanf("%d", &array[i]);
    printf("Enter value to find: ");
    scanf("%d", &s);
    first = 0;
    last = n - 1;
    mid = (first+last)/2;
    while (first <= last) {
        if (array[mid] < s)
            first = mid + 1;
        else if (array[mid] == s) {
            printf("\n%d found at location %d.\nSearch is successful.\n", s, mid+1);
            break;
        }
        else
            last = mid - 1;

            mid = (first + last)/2;
        }
    if (first > last)
        printf("\n%d Item is not found.\n", s);
    return 0;
}
