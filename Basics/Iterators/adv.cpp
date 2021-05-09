#include <iostream>  
#include<vector>  
#include<iterator>  
using namespace std;  
int main()  
{  
    vector<int> v{1,2,3,4,5};  
    vector<int>::iterator itr;  
    for(int i=0;i<5;i++)           // Traversal without using an iterator.  
    {  
        cout<<v[i]<<" ";  
    }  
    cout<<'\n';  
    for(itr=v.begin();itr!=v.end();itr++)  // Traversal by using an iterator.  
    {  
        cout<<*itr<<" ";  
    }  
    /* v.push_back(10);  */ 
    cout<<'\n';  
     for(int i=0;i<6;i++)  
    {  
        cout<<v[i]<<" ";  
    }  
    cout<<'\n';  
     for(itr=v.begin();itr!=v.end();itr++)  
    {  
        cout<<*itr<<" ";  
    }  
     return 0;  
}  