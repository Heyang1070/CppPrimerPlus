#include <iostream>

int main(void)
{
    using namespace std;
    int year;
    char address[80];
    cout << "What's year you house built?" << endl;
    (cin >> year).get();
    cout << "What is its street address?" << endl;
    cin.getline(address, 80);
    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!\n";

    return 0;
}

// (cin >> year).get(); 这一行可以写成如下几种形式
// 一、 cin >> year; cin.get()
// 二、 cin >> year; cin.get(char);
// 三、 (cin >> year).get(char);