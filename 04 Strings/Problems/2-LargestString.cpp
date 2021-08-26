#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    //for consuming the extra line, ie \n 
    cin.get();

    char sentence[1000];
    char largest[1000];

    int largest_length = 0;

    while (n--)
    {
        cin.getline(sentence, 1000);
        int len = strlen(sentence);
        if (len > largest_length)
        {
            largest_length = len;
            strcpy(largest, sentence);
        }
    }
    cout << "Largest string is => " << largest;

    return 0;
}