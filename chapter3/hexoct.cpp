// 显示十六进制和八进制数
#include <iostream>

int main(void)
{
    using namespace std;
    int chest = 42;   // 十进制
    int waist = 0x42; // 十进制为 66
    int inseam = 042; // 十进制为34

    cout << "Monsieur cuts a striking figure!\n";
    cout << "chest = " << chest << " (42 in decimal)" << endl;
    cout << "waist = " << waist << " (0x42 in hex)\n";
    cout << "inseam = " << inseam << " (042 in octal)" << endl;

    return 0;
}