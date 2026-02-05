#include <iostream>
using namespace std;
int main(){
    double num1;
    double num2;
    double result;
    char op;
    cout << "请输入第一个数"<<endl;
    cin >> num1;
    cout << "请输入第二个数"<<endl;
    cin >> num2;
    cout << "请输入运算符(+,-,*,/)" <<endl;
    cin >> op;
    switch(op){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2==0){
                cout << "错误：除数不能为0！"<<endl;
                return 1;
            }
            result = num1 / num2;
            break;
        default :
            cout << "错误：不支持的运算符！"<<endl;
            return 1;
    }
    cout << "计算结果："<< num1 << " " << op << " "<<num2 << "==" << result << endl;
    return 0;
}