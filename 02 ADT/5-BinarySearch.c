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
//binary search
int BinarySearch(struct Array arr, int key)
{
    int l, mid, h;
    l = 0;
    h = arr.length - 1;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr.A[mid])
            return mid;
        else if (key < arr.A[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}
//recurssive binary search
int RBinarySearch(struct Array arr, int key, int l, int h)
{
    int mid = (l + h) / 2;
    if (arr.A[mid] == key)
    {
        return mid;
    }
    else if (key < arr.A[mid])
    {
        return RBinarySearch(arr, key, l, mid - 1);
    }
    else
    {
        return RBinarySearch(arr, key, mid + 1, h);
    }
}

int main()
{
    struct Array arr = {{5, 6, 7, 8, 9, 10}, 6, 10};
    int i = 0;
    printf("By normal way, position is-> %d \n", BinarySearch(arr, 9));
    printf("\n");
    printf("By Recurssion, position is-> %d \n", RBinarySearch(arr, 9, 0, arr.length - 1));
    printf("\n");
    Display(arr);
    return 0;
}