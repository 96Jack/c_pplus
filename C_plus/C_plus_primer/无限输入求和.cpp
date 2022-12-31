#include <iostream>
using namespace std;
int main (){
    int sum = 0, val = 0;
    while (cin >> val)
    // 当使用istream对象作为条件时，效果为检测流的状态，若流是有效的时候检测成功反之检测失败
    // 当遇到文件结束符（end of file）时，或遇到无效输入时(:读入的数据不是整数)，此时无效的istream对象会使条件为假
        sum += val;
    cout << "Sum is :" << sum << endl;
    return 0;
}