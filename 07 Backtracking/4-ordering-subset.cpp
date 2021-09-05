#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findSubsets(char *input, char *output, int i, int j, vector<string> &list)
{
    //base case
    if (input[i] == '\0')
    {
        //prevent any garbage value
        output[j] = '\0';
        //cout << output << endl;

        //we are converting output array into a string object
        string temp(output);
        list.push_back(temp);
        return;
    }

    //recursive cases
    //include ith position

    output[j] = input[i];
    findSubsets(input, output, i + 1, j + 1, list);

    //excluding ith psoition
    output[j] = '\0';
    findSubsets(input, output, i + 1, j, list);
}

int main()
{
    char input[100];
    char output[100];
    vector<string> list;
    cin >> input;

    sort(list.begin(), list.end());
    findSubsets(input, output, 0, 0, list);

    for (auto s : list)
    {
        cout << s << " ";
    }
    return 0;
}