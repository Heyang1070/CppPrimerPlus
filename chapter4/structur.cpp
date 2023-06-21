//简单的结构使用说明
#include <iostream>

struct inflatable // 结构申明
{
    char name[20];
    float volume;
    double price;
};

int main(void)
{
    using namespace std;

    inflatable guest = 
    {
        "Glorious Gloria", //名字
        1.88, // 体积
        29.99 // 价格
    };

    inflatable pal = 
    {
        "Audacious Arthur",
        3.12,
        32.99
    };

    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << "!\n";
    cout << "You can have both for $";
    cout << guest.price + pal.price << "!\n";

    return 0;
}
