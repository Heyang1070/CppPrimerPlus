// 使用语句块
#include <iostream>

int main(void)
{
    using namespace std;

    cout << "The Amazing Accounto will sum and average";
    cout << "five numbers for you." << endl;
    cout << "please enter five valuse:" << endl;

    double number;
    double sum = 0.0;

    for (int i = 1; i <= 5; i++)
    {
        cout << "value " << i << ": ";
        cin >> number;
        sum += number;
    }
    cout << "Five exquisite choices indeed! ";
    cout << "They sum to " << sum << endl;
    cout << "and average to " << sum / 5 << ".\n";
    cout << "The Amazing Accounto bids you adieu!" << endl;

    return 0;
}