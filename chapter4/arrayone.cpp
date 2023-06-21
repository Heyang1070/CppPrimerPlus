// 较小的整数数组
#include <iostream>

int main(void)
{
    using namespace std;
    int total;
    int yams[3];
    int yamcosts[3] = {20, 30, 5};
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;

    cout << "Total yams = ";
    cout << yams[0] + yams[1] + yams[2] << endl;
    cout << "The package with " << yams[1] << " yams costs ";
    cout << yamcosts[1] << " cents per yam." << endl;
    total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
    total = total + yams[2] * yamcosts[2];
    cout << "The total yam expense is " << total << " cents." << endl;

    cout << "\nSize of yams array = " << sizeof(yams);
    cout << " bytes.\n";
    cout << "Size of one element = " << sizeof(yams[0]);
    cout << " bytes." << endl;

    return 0;
}