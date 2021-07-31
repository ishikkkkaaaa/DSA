#include <stdio.h>

struct Array
{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr)
{
    printf("Elements are: \n");
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
};

//DELETING A INDEX
int Delete(struct Array *arr, int index)
{
    int temp = 0;
    int i;
    if (index >= 0 && index < arr->length)
    {
        temp = arr->A[index];
        //shifting
        for (i = index; i < arr->length - 1; i++)
        {
            arr->A[i] = arr->A[i + 1];
        }
        arr->length--;

        return temp;
    }
    return 0;
}

int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};
    //array,size,length
    printf("%d", Delete(&arr, 0));
    Display(arr);

    return 0;
}