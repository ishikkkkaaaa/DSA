/* #include <iostream>
enum Season{ Summer, Spring, Winter, Autumn};
int main()
{
    enum Season s;
    s = Spring;
    std::cout << s << std::endl;
    return 0;
} */

#include <iostream>
enum Season
{
    Summer,
    Spring,
    Winter,
    Autumn
};
int main()
{
    enum Season s1 = Summer;
    enum Season s2(Winter);
    std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;
    return 0;
}