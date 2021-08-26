#include<iostream>
using namespace std;

int main()
{
    char a[1000] = "apple";
    char b[1000];

    //length of string 
    cout << "Length of string is=> " << strlen(a) << endl;

    //copy a string 
    strcpy(b, a);
    cout << "After copying a in b, b is=> " << b << endl;

    //compairing strings 
    cout << "Compairing a and b=> " << strcmp(a, b) << endl;

    //concat 2 string?
    char web[] = "www.";
    char name[] = "google.com";
     cout << "After we concatenate=> " << strcat(web, name) << endl;

    return 0;

}