#include <iostream>
#include <vector>

using namespace std;

void findSubsets(char *input, char *output, int i, int j)
{
    //base case
    if (input[i] == '\0')
    {
        //prevent any garbage value
        output[j] = '\0';
        cout << output << endl;
        return;
    }

    //recursive cases
    //include ith position

    output[j] = input[i];
    findSubsets(input, output, i + 1, j + 1);

    //excluding ith psoition
    output[j] = '\0';
    findSubsets(input, output, i + 1, j);
}

int main()
{
    char input[100];
    char output[100];
    cin >> input;
    findSubsets(input, output, 0, 0);
    return 0;
}