// 外部变量
#include <iostream>
using namespace std;

double warming = 0.3;
void update(double dt);
void local(void);

int main() // uses global variable
{
    cout << "Global warming is " << warming << " degrees.\n";
    update(0.1); // call function to change warming
    cout << "Global warming is " << warming << " degrees.\n";
    local(); // call function with local warming
    cout << "Global warming is " << warming << " degrees.\n";
    return 0;
}
