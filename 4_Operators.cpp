#include <iostream>
using namespace std;
int main (){
    cout <<"-----------------OPERATORS-----------------" << endl;
    int sum1 = 100 + 50;
    int sum2 = sum1 + 250;
    int sum3 = sum2 + sum2;
    cout << sum1 << "\n";
    cout << sum2 << "\n";
    cout << sum3 << "\n";
    cout << endl;

    cout <<"-----------------ASSIGNEMENT OPERATORS-----------------" << endl;
    int a = 10;
    a += 5;
    cout << "\t" << a << "\n";
    cout << "-------------------" << endl;

    int b = 10;
    b -= 5;
    cout << "\t" << b << "\n";
    cout << "-------------------" << endl;

    int c = 5;
    c *= 3;
    cout << "\t" << c << "\n";
    cout << "-------------------" << endl;

    int d = 5;
    d /= 3;
    cout << "\t" << d << "\n";
    cout << "-------------------" << endl;

    int e = 5;
    e %= 3;
    cout << "\t" << e << "\n";
    cout << "-------------------" << endl;

    int f = 5;
    f &= 3;
    cout << "\t" << f << "\n";
    cout << "-------------------" << endl;

    int h = 5;
    h |= 3;
    cout << "\t" << h << "\n";
    cout << "-------------------" << endl;

    int j = 5;
    j ^= 3;
    cout << "\t" << j << "\n";
    cout << "-------------------" << endl;

    int s = 5;
    s >>= 3;
    cout << "\t" << s << "\n";
    cout << "-------------------" << endl;

    int O = 5;
    O <<= 3;
    cout << "\t" << O << "\n";
    cout << endl;

    int x = 5;
    int y = 3;
    cout << "-----------COMPARISON OPERATORS-----------" << endl;
    cout << "x=" << x << " y=" << y << " \nx > y Ket qua: " << (x > y) << "\n"; //(1) là true or (0) là false
    cout << ".................." << endl;
    cout << "x=" << x << " y=" << y << " \nx < y Ket qua: " << (x < y) << "\n";
    cout << ".................." << endl;
    cout << "x=" << x << " y=" << y << " \nx == y Ket qua: " << (x == y ) << "\n";
    cout << ".................." << endl;
    cout << "x=" << x << " y=" << y << " \nx != y Ket qua: " << (x != y) << "\n";
    cout << ".................." << endl;
    cout << "x=" << x << " y=" << y << " \nx >= y Ket qua: " << (x >= y) << "\n";
    cout << ".................." << endl;
    cout << "x=" << x << " y=" << y << " \nx <= y Ket qua: " << (x <= y) << "\n";
    cout << endl;

    cout << "-----------------LOGICAL OPERATORS-----------------" << endl;
    //áp dụng x y ở phía trên
    cout << "(x > 3 && x < 10) Ket qua: " << (x > 3 && x < 10) << "\n"; //trả về true (1) vì 5 lớn hơn 3 và 5 nhỏ hơn 10
    cout << ".................." << endl;
    cout << "(x > 3 || x < 4) Ket qua: " << (x > 3 || x < 4) << "\n";
    cout << ".................." << endl;
    cout << "(!(x > 3 && x < 10)) Ket qua: " << (!(x > 3 && x < 10)) << "\n";
    return 0;
}