#include <iostream>
using namespace std;
int main(){
    int scores[5] = {85,92,78,96,88};
    cout << "第一个学生的分数：" << scores[0] << endl;
    cout << "第三个学生的分数：" << scores[2] << endl;
    scores[1] = 95;
    cout <<"所有分数"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "scores[" << i << "]"<< "=" << scores[i]<<endl;
    }
    int sum=0;
    for (int i = 0; i < 5; i++)
    {
        sum += scores[i];
    }   
    double average = static_cast<double>(sum)/5;
    cout << "平均分：" << average << endl;
    return 0;
}