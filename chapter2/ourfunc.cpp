//定义自己的函数

#include <iostream>
void simon(int n);

int main()
{
    using namespace std;
    
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
    using namespace std;
    cout << "Simon  says touch your toes " << n << " times." <<endl;
}