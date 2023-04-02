#include<iostream>
#include<cmath>
using namespace std;
#if 0
int main(){
    using namespace std;
    float carrots;
    cin >> carrots;
    carrots=sqrt(carrots);
    cout << carrots;
    return 0;
}
#endif

template<class T> //templarte<typename T> 只对后面第一个函数生效
void MySwap(T& a,T& b){
    T temp=a;
    a=b;
    b=temp;
}

void test_01(){

    int a=10,b=20;
    cout << "a:" << a << " b:" << b << endl;
    MySwap(a,b);    //编译器会根据你传的值，进行类型自动推导
    cout << "a:" << a << " b:" << b << endl;

    // 2. 显式的指定类型
    MySwap<int>(a,b);

}

int main(){
    test_01();
    return 0;
}