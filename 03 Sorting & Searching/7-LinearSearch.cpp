// code Linear Search
#include <iostream>

using namespace std;

int LinearSearch(int arr[],int n, int key)
{
    for(int i=0;i<n;i++)
    {
        if (arr[i]==key)
        {
            return arr[i];
        }
    }
     
    return -1;
}

int main()
{
    int n;
    cin>>n;
    
    int key;
    cin>>key;
    
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<LinearSearch(arr,n,key);
    return 0;
}
