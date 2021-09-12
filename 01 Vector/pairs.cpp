/***
 * gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
 * Copyright (C) 2019 Free Software Foundation, Inc.
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
// efficient O(log n)
// and the loop changes is sort => log2 n {depends on the std::sort} and then the o(log2 n)
void display(std::vector<int> arr){
    std::cout<<"[ ";
    for(std::vector<int>::iterator i = arr.begin(); i!=arr.end(); i++)
        std::cout<<*i<<" ";
    std::cout<<"]\n";
}
int main(int argc, char const *argv[])
{
    std::vector<int> arr = {2,9,3,4,1};

    display(arr);
    std::unordered_set<int> hashTable;

    int S = 5;
    for(int i=0;i<arr.size();i++){
        int temp = S - arr[i];
        if(hashTable.find(temp) != hashTable.end())
        {
            std::cout<<"Found! ("<<temp
                    <<", "<<arr[i]<<")\n";
                    break;
        }
        hashTable.insert(arr[i]);
    }
    

    remove(argv[0]);
    return 0;
}
