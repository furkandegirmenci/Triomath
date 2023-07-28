#include "Number.hpp"

int Trio::Number::get()
{
    return value;
}
Trio::Number Trio::Number::operator+(Trio::Number& rhs)
{
    int tempNum{0};
    tempNum = value + rhs.get();
    Trio::Number tempObj(tempNum);
    return tempObj;
}
Trio::Number Trio::Number::operator-(Trio::Number &rhs)
{
    int tempNum{0};
    tempNum = value - rhs.get();
    Trio::Number tempObj(tempNum);
    return tempObj;
}
Trio::Number Trio::Number::operator*(Trio::Number &rhs)
{
    return value * rhs.get();
}
Trio::Number Trio::Number::operator/(Trio::Number &rhs)
{
    return value / rhs.get();
}
Trio::Number Trio::Number::operator^(Trio::Number &rhs)
{
    int tempNum{1}, count{rhs.get()};
    while(count > 0)
    {
        tempNum *= value;
        count--;
    }
    Trio::Number tempObj(tempNum);
    return tempObj;
}
Trio::Number Trio::Number::operator%(Trio::Number &rhs)
{
    return value % rhs.get();
}
Trio::Number Trio::Number::operator++()
{
    int tempNum{value};
    return tempNum += 10;
}
Trio::Number Trio::Number::operator--()
{
    int tempNum{value};
    return tempNum -= 10;
}
Trio::Number Trio::Number::operator-()
{
    int tempNum{value};
    return -tempNum;
}
