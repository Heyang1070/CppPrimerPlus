// 求模运算
#include <iostream>

int main(void)
{
    using namespace std;
    const int Lbs_per_stn = 14;
    int lbs;
    int stone;
    int pounds;

    cout << "Enter your weight in pounds: ";
    cin >> lbs;
    stone = lbs / Lbs_per_stn;
    pounds = lbs % Lbs_per_stn;
    cout << lbs << " pounds are " << stone << " stone, " << pounds << " pound(s)." << endl;

    return 0;
}