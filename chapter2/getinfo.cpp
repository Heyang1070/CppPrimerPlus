#include <iostream>

int main(void)
{
    using namespace std;
    int carrost;

    cout << "How many carrost do you have?" << endl;
    cin >> carrost;
    cout << "Here are two more. ";
    carrost = carrost + 2;
    cout << "Now you have " << carrost << " carrost." << endl;

    return 0;
}