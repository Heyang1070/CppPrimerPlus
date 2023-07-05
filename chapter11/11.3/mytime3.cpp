// 常用的友元，重载运算符
#include "mytime3.h"

Time::Time()
{
    hours = minutes = 0;
}

Time::Time(int h, int m)
{
    hours = h;
    minutes = m;
}

void Time::AddMin(int m)
{
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::Reset(int h, int m)
{
    hours = h;
    minutes = m;
}

Time Time::operator+(const Time &t) const
{
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

Time Time::operator-(const Time &t) const
{
    Time diff;
    int total1, total2;
    total1 = t.minutes + 60 * t.hours;
    total2 = minutes + 60 * hours;
    diff.minutes = (total2 - total1) % 60;
    diff.hours = (total2 - total1) / 60;
    return diff;
}

Time Time::operator*(double n) const
{
    Time result;
    long totalminutes = hours * n * 60 + minutes * n;
    result.hours = totalminutes / 60;
    result.minutes = totalminutes % 60;
    return result;
}

std::ostream &operator<<(std::ostream &os, const Time &t)
{
    os << t.hours << " hours, " << t.minutes << " minutes";
    return os;
}