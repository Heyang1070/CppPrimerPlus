// 浮点型的精度问题
#include <iostream>

int main(void)
{
    float a = 2.34e+22f;
    float b = a + 1.0f;

    std::cout << "a = " << a << std::endl;
    std::cout << "b -a = " << b - a << std::endl;
    
    return 0;
}