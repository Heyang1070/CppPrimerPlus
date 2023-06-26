// 读取文本文件
// 1、必须包含头文件fstream。
// 2、头文件fstream定义了一个用于处理输入的ifstream类
// 3、需要声明一个或多个ifstream变量(对象)，并以自己喜欢的方式对其进行命名，条件是遵守常用的命名规则。
// 4、必须指明名称空间std; 例如，为引用元素ifstream，必须使用编译指令using或前缀std::
// 5、需要将ifstream对象与文件关联起来。为此，方法之一是使用open()方法。
// 6、使用完文件后，应使用close()方法将其关闭。
// 7、可结合使用ifstream对象和运算符>>来读取各种类型的数据。
// 8、可以使用ifstream对象和get()方法来读取一个字符，使用ifstream对象和getline()来读取一行字符
// 9、可以结合使用ifstream和eof()、fail()等方法来判断输入是否成功。
// 10、fstream对象本身被用作测试条件时，如果最后一个读取操作成功，它将被转换为布尔值true，否则被转换为false。

// 输入的文件名 ./chapter6/scores.txt
// 相对于书上的源码有些些修改， 主要是读取的文件中的换行符的问题

#include <iostream>
#include <fstream>
#include <cstdlib>
const int SIZE = 60;

int main(void)
{
    using namespace std;
    char filename[SIZE];
    ifstream inFile;
    cout << "Enter name of data file: ";
    cin.getline(filename, SIZE);
    inFile.open(filename);

    if (!inFile.is_open())
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }

    double value;
    double sum = 0.0;
    double count = 0;

    while (inFile.good())
    {
        ++count;
        sum += value;
        inFile >> value;
    }

    if (inFile.eof())
        cout << "End of file reached.\n";
    else if (inFile.fail())
        cout << "Input terminated by data mismatch.\n";
    else
        cout << "Input terminated for unknown reason.\n";

    if (count == 0)
        cout << "No data processed.\n";
    else
    {
        cout << "Items read: " << count - 1 << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << sum / (count - 1) << endl;
    }

    inFile.close();

    return 0;
}