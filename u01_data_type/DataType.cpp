#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age = 18;
    double height = 1.75;
    char grade = 'A';
    string name = "Alice";
    bool isCppFun = true;
    cout << "姓名：" << name << endl;
    cout << "年龄：" << age << endl;
    cout << "身高：" << height << "米"<<endl;
    cout << "成绩：" << grade << endl;
    cout << "C++有趣吗？" << (isCppFun?"是的!":"不是。") <<endl;

    cout << "明年我就：" << age + 1 << "岁了" << endl;

    return 0;
}