// 使用new和delete的示例
#include <iostream>
#include <cstring>

using namespace std;
char *getname(void);

int main(void)
{
    char *name;
    name = getname();
    cout << name << " at " << (int *)name << endl;
    delete[] name;

    name = getname();
    cout << name << " at " << (int *)name << endl;
    delete[] name;

    return 0;
}

char *getname(void)
{
    char temp[80];
    cout << "Enter last name: ";
    cin >> temp;
    char *pn = new char[strlen(temp) + 1];
    strcpy(pn, temp);

    return pn;
}
