#include <stdio.h>

struct Array
{
    int A[10];
    int size;
    int length;
};
//this is call by address
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void Display(struct Array arr)
{
    int i;
    printf("Elements are: \n");
    for (i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
    printf("\n");
}

//we gotta modifiy, so we call by address
void LinearSearch(struct Array *arr, int key)
{
    int i;
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            swap(&arr->A[i], &arr->A[0]);
            printf("%d found at %d\n", key, i);
        }
    }
}

int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};

    Display(arr);
    LinearSearch(&arr, 3);

    return 0;
}

/* 
Linear Search:
#include <stdio.h>

struct Array
{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    printf("Elements are: \n");
    for (i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
    printf("\n");
}
void LinearSearch(struct Array arr, int key)
{
    int i;
    for (int i = 0; i < arr.length; i++)
    {
        if (key == arr.A[i])
        {
            printf("%d found at %d\n", key, i);
        }
    }
}

int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};

    Display(arr);
    LinearSearch(arr, 3);
    return 0;
}

*/