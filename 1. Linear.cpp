#include <stdio.h>
int main()
{
    int Tahmid[] = {19, 33, 11, 67};
    int x, i, n;
    printf("Enter a number to search: ");
    scanf("%d", &x);
    for (i=0; i<n; i++)
    {
        if (Tahmid[i] == x)
        {
            printf("\n%d is available at location %d.\n", x, i+1);
            break;
        }
    }
    if (i == n)
        printf("\n%d is not available in the array.\n\nSearch is unsuccessful\n", x);
    return 0;
}
