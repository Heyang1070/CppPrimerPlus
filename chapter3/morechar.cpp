// char类型和int类型的对比
#include <iostream>

int main(void)
{
    using namespace std;
    char ch = 'M';
    int i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Add one to the character code:" << endl;
    ch += 1;
    i = ch; 
    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Display char ch using cou.put(ch): ";
    cout.put(ch);

    cout << endl << "Done" << endl;

    return 0;
}