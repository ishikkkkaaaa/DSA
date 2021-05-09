#include <iostream>
enum Days
{
    sun,
    mon,
    tue = 5,
    wed,
    thurs,
    fri,
    sat
};
int main()
{
    enum Days day;
    day = mon;
    std::cout << day << std::endl;
    return 0;
}