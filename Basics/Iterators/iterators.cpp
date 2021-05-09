#include <iostream>  
#include<iterator>  
#include<vector>  
using namespace std;  
int main()  
{  
   vector<int> v{1,2,3,4,5};  
   vector<int>::iterator itr;  
   for(itr=v.begin();itr!=v.end();itr++)  
   {  
       cout << *itr <<" ";  
   }  
    return 0;  
}  
/* g++ -std=c++11 -o iterators iterators.cpp */

/* (base) Ishikas-MacBook-Air:Iterators ishikakesarwani$ g++ -std=c++11 -o iterators iterators.cpp
(base) Ishikas-MacBook-Air:Iterators ishikakesarwani$ ./iterators
1 2 3 4 5 (base) Ishikas-MacBook-Air:Iterators ishni$ esarwan */