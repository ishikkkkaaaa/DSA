#include <iostream>
#include <vector>
#include<iterator>

using namespace std;

int main()
{
    vector<string> v;
    v.push_back("hey");
    v.push_back("ishika");

    vector<string>::iterator str;

    for (str = v.begin(); str != v.end(); str++)
    {
        cout << *str<<endl;
    }
    return 0;
}
/* #include<iostream>  
#include<vector>  
using namespace std;  
int main()  
{  
vector<string> v1;  
v1.push_back("javaTpoint ");  
v1.push_back("tutorial");  
for(vector<string>::iterator itr=v1.begin();itr!=v1.end();++itr)  
cout<<*itr;  
return 0;   
}  */ 