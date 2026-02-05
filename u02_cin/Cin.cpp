#include <iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout << "请输入第一个数字"<<endl;
    cin >> num1;
    cout << "请输入第二个数字"<<endl;
    cin >> num2;
    cout << num1 << "+" << num2 << "==" << num1 + num2 <<endl;
    cout << num1 << "-" << num2 << "==" << num1 - num2 <<endl;
    cout << num1 << "*" << num2 << "==" << num1 * num2 <<endl;
    cout << num1 << "/" << num2 << "==" << num1 / num2 <<endl;
    cout << num1 << "%" << num2 << "==" << num1 % num2 <<endl;
    num1 += 10;
    cout << "num1 加10后等于: " << num1 << endl;
    return 0;
}