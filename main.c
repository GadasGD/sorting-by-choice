#include <stdio.h>


void choicesort(int arr[], int size);


int main(int argc, char const *argv[])
{
    int arr[] = {10, 15, 4, 7, 19, 6, 2, 17, 21, 5};
    choicesort(arr, sizeof(arr));

    printf("{ ");
    for (int i = 0; i < sizeof(arr) / 4; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("} \n");
    return 0;
}

void choicesort(int arr[], int size)
{
    int min = 99999;
    for (int i = 0, iter = 0, flag = 0; i < size / 4; i++)
    {
        int rarr = 0;
        for (int j = 0; j < size / 4; j++)
        {
            if (iter != 0 && flag != 0)
            {
                j += iter;
                flag = 0;
            }
            if (arr[j] < min)
            {
                min = arr[j];
                rarr = j;
            }
        }
        iter++;
        flag = 1;
        arr[rarr] = arr[i];
        arr[i] = min;
        min = 99999;
    }
}