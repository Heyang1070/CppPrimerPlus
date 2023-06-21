// 共用体
#include <iostream>

using namespace std;

struct widget
{
    char brand[20];
    int type;

    union id
    {
        long id_num;
        char id_char[20];
    } id_val;  
};

int main(void)
{
    widget prize;

    return 0;
}
