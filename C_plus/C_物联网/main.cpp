# include <iostream>
using namespace std;

// 1. 命名空间的嵌套
namespace A {
    int num1 = 10 ;
    namespace B {
        int num2 = 20;
    }
}
// 2. 命名空间的拓展性（合并）
namespace A {
    // int num1 = 30; // 不能从重复定义同一命名空间的变量值。
    int num2 = 40;
    int num3 = 50;
}

// 命名空间得访问，就是作用域的访问

// 4. 命名空间可以存放，类，结构体，函数，类...
namespace C {
    int num = 60;
    // 结构体
    struct stu{};
    // 类
    class STU{};
    // 函数
    void func(){}
}

// 5. 匿名的命名空间(=全局变量)
// 等价于静态变量: static int num1 = 400;

namespace {
    int num1 = 400;
    int num2 = 500;
}

int main()
{
    cout << "num1 = " << A::num1 << endl;
    cout << "num2 = " << A::num2 << endl;
    cout << "num2 = " << A::B::num2 << endl;
    cout << "num3 = " << A::num3 << endl;
    // 3. 给命名空间重新取一个别名为newName
    namespace newName = A;
    cout << "num3 = " << newName::num3 << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << ::num2 << endl;
    // 当使用的命名空间不是std时，就需要声明
    std:: cout << num2 << endl;

}