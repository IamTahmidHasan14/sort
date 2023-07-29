#include <stdio.h>
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
void selectionSort(int array[], int arraysize)
{
    for (int step=0; step<arraysize-1; step++)
    {
        int min_idx = step;
        for (int i=step+1; i<arraysize; i++)
        {
            if (array[i] < array[min_idx])
                min_idx = i;
        }
        swap(&array[min_idx], &array[step]);
    }
}
void printArray(int array[], int arraysize)
{
    for (int i=0; i<arraysize; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
int main() {
    int old[] = {19, 33, 11, 67};
    int arraysize = sizeof(old) / sizeof(old[0]);
    selectionSort(old, arraysize);
    printf("Sorted array in ascending Order (Using Selection Sort Method):\n");
    printArray(old, arraysize);
}
