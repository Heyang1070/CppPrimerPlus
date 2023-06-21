#include <iostream>
#include <cmath>

int main(void)
{
    using namespace std;
    
    double area, side;
    cout << "Enter the floor area, in square feet, of your home: ";
    cin >> area;
    side = sqrt(area);
    cout << "That is the equivalent of a square " << side << " feet to the side." << endl;
    cout << "How fascinating!" << endl;

    return 0; 
}