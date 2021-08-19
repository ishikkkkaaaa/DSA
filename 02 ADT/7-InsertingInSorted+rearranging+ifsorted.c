#include <stdio.h>

struct Array
{
    int A[10];
    int length;
    int size;
};

//display array
void Display(struct Array arr)
{
    int i;
    for (i = 0; i < arr.length; i++)
    {
        printf("%d  ", arr.A[i]);
    }
    printf("\n");
}
//insert in a sorted Array
void Insert(struct Array *arr, int x)
{
    int i = arr->length - 1;
    if (arr->length == arr->size)
    {
        return;
    }
    while (x < arr->A[i] && i >= 0)
    {
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    arr->A[i + 1] = x;
    arr->length++;
}
//checking if array is sorted or not
int isSort(struct Array arr)
{
    int i;
    for (i = 0; i < arr.length - 1; i++)
    {
        if (arr.A[i] > arr.A[i + 1])
            return 0;
    }
    return 1;
}
void Rearrange(struct Array *arr)
{
    int i, j;
    i = 0;
    j = arr->length - 1;
    while (i < j)
    {
        while (arr->A[i] < arr->A[i + 1])
        {
            i++;
        }
        while (arr->A[j] > arr->A[i])
        {
            j--;
        }
        if (i < j)
        {
            int temp = arr->A[i];
            arr->A[i] = arr->A[j];
            arr->A[j] = temp;
        }
    }
}

int main()
{
    struct Array arr = {{15, -6, 7, -8, 9, 10}, 6, 10};
    int i = 0;
    //print
    printf("Before Inserting\n");
    Display(arr);
    //after rearrange
    Rearrange(&arr);
    //insert
    //Insert(&arr, 1);
    //printf("%d \n", isSort(arr));
    Display(arr);
    return 0;
}