/* If ‘n‘ is odd, print Weird.
If ‘n‘ is even and in the inclusive range of 2 to 5, print Not Weird.
‘n‘ is even and in the inclusive range of 6 to 20, print Weird.
If ‘n‘ is even and greater than 20, print Not Weird. */

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int main()
{
    string N_temp;
    getline(cin, N_temp);

    int N = stoi(ltrim(rtrim(N_temp)));

    if (N % 2 == 0)
    {
        if (N >= 2 && N <= 5)
        {
            cout << "Not Weird";
        }
        else if (N >= 6 && N <= 20)
        {
            cout << "Weird";
        }
        else
        {
            cout << "Not Weird";
        }
    }
    else
    {
        cout << "Weird";
    }

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}
