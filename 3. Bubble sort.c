#include <stdio.h>
void bubbleSort(int newarray[], int arraysize)
{
    for (int step=0; step<arraysize-1; ++step)
    {
        for (int i=0; i<arraysize-step-1; ++i)
        {
            if (newarray[i] > newarray[i + 1])
            {
                int temp = newarray[i];
                newarray[i] = newarray[i + 1];
                newarray[i + 1] = temp;
            }
        }
    }
}
void printNewArray(int newarray[], int arraysize)
{
    for (int i=0; i<arraysize; ++i)
    {
        printf("%d ", newarray[i]);
    }
    printf("\n");
}
int main()
{
    int old[] = {19, 33, 11, 67};
    int arraysize = sizeof(old) / sizeof(old[0]);
    bubbleSort(old, arraysize);
    printf("Sorted Array in Ascending Order (Using Bubble Sort Method):\n");
    printNewArray(old, arraysize);
}
