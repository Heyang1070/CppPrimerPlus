//将stone转换为pound
#include <iostream>
int stonetolb(int n);

int main(void)
{
    using namespace std;

    int stone;
    int pounds;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    pounds = stonetolb(stone);
    cout << stone << " stone = ";
    cout << pounds << " pounds." << endl;

    return 0;
}

int stonetolb(int n)
{
    return 14 * n;
}