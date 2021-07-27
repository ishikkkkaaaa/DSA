#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class Solution
{
    //Write your code here
    stack<char> stk;
    queue<char> que;

public:
    char c;

    void pushCharacter(char ch)
    {
        stk.push(ch);
    }
    char popCharacter()
    {
        c = stk.top();
        stk.pop();
        return c;
    }
    void enqueueCharacter(char ch)
    {
        que.push(ch);
    }
    char dequeueCharacter()
    {
        c = que.front();
        que.pop();
        return c;
    }
};

int main()
{