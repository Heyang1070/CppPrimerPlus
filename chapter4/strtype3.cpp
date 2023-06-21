// string 类中更多的特性
#include <iostream>
#include <string>
#include <cstring>

int main(void)
{
    using namespace std;
    char char1[20];
    char char2[20] = "jaguar";
    string str1;
    string str2 = "panther";

    str1 = str2; // copy str2 to str1
    strcpy(char1, char2); // copy char2 to char1

    str1 += " paste";
    strcat(char1, " juice");

    int len1 = str1.size();
    int len2 = strlen(char1);

    cout << "The string " << str1 << " contains " << len1 << " characters." << endl;
    cout << "The string " << char1 << " contains " << len2 << " characters." << endl;

    return 0;
}