#include <iostream>
using namespace std;

bool isLeapYear(int year){
    return(year%4==0 && year%100 !=0) ||(year%100==0);
}


int main()
{
    int year;
    cout << "请输入你想确认的年份"<<endl;
    cin >> year;
    if(isLeapYear(year)){
        cout << year << "年是闰年"<<endl;
    }else {
        cout << year << "年不是闰年"<<endl;
    }
    return 0;
}


