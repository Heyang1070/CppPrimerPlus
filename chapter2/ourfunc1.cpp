//重新定位using指令
#include <iostream>
using namespace std;
void simon(int n);

int main(void)
{
    int count;
    simon(3);
    cout << "Pick an integer: ";
    cin >> count;
    simon(count);
    cout << "Done!" << endl;

    return 0;
}

void simon(int n)
{
    cout << "Simon says touch your toes " << n << " times." << endl; 
}
