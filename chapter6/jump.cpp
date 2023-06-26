// 使用 continue 和 break 语句
#include <iostream>
const int ArSize = 80;

int main(void)
{
    using namespace std;
    char line[ArSize];
    int spaces = 0;

    cout << "Enter a line of text:" << endl;
    cin.get(line, ArSize);
    cout << "Complete line:\n"
         << line << endl;
    cout << "Line through first period:\n";

    for (int i = 0; line[i] != '\0'; i++)
    {
        cout << line[i];
        if (line[i] == '.')
            break;
        if (line[i] != ' ')
            continue;
        spaces++;
    }
    cout << "\n"
         << spaces << " spaces\n";
    cout << "Done.\n";

    return 0;
}
