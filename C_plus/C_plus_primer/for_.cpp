#include <iostream>
using namespace std;
int main(){
    int sum = 0;
    for (int val = 0; val<=10; ++val)
        sum += val;
    cout << "sum of 1 to 10 includesive is " << sum << endl;
    return 0;
}
