#include <iostream>
using namespace std;
int main()
{
    int score;
    cout << "请输入你的考试成绩(0-100):"<<endl;
    cin >>score;
    if(score >= 90){
        cout << "优秀！" << endl;
    } else if(score >= 80) {
        cout << "良好！" << endl;
    } else if(score >= 60) {
        cout << "及格。" << endl;
    } else {
        cout << "不及格，需要努力！" << endl;
    }
    int num;
    cout <<"请输入一个整数：";
    cin >> num;
    if(num%2==0) {
        cout << num << "是偶数。" << endl;
    } else {
        cout << num << "是奇数。" << endl;
    }
    return 0;
}