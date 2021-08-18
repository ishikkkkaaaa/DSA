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
//reverse array
void Reverse(struct Array *arr)
{
    int i, j;
    for (i = 0, j = arr->length - 1; i < j; i++, j--)
    {
        //swap array
        int temp = arr->A[i];
        arr->A[i] = arr->A[j];
        arr->A[j] = temp;
    }
}

int main()
{
    struct Array arr = {{5, 6, 7, 8, 9, 10}, 6, 10};
    int i = 0;
    //print reverse array
    Reverse(&arr);
    Display(arr);
    return 0;
}