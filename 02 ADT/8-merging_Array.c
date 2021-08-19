#include<stdio.h>

//Merging 2 Arrays
int main()
{
    int a[10],b[10],i,j,k,n,m;      //Declaring variables
    printf("Enter the size of first array: ");          //Input for size of first array
    scanf("%d",&n);

    printf("Enter the elements of first array: ");                      //Input for elements of first array
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter the size of second array: ");             
    scanf("%d",&m);         

    printf("Enter the elements of second array: ");
    for(j=0;j<m;j++)                
        scanf("%d",&b[j]);   
                       
    for(i=0;i<n+m;i++)              
    {
        if(i<n)
            printf("%d ",a[i]);     //Printing first array
        else
            printf("%d ",b[i-n]);  //Printing second array
    }
    return 0;
}
