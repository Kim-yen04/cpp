#include <iostream>
using namespace std;
int main (){
    cout <<"------------------KIEU SO------------------" << endl;
    //so nguyen
    int myNum1 = 1000; //Số nguyên
    float myNum2 = 19.99; //trôi nổinổi
    double myNum3 = 19.99; //gấp đôiđôi
    cout << myNum1 << endl;
    cout << myNum2 << endl;
    cout << myNum3 << endl;
    cout << endl;

    cout << "So khoa hoc!" << endl;
    cout << "EX:" << endl;
    //Số khoa học ví dụ
    float f1 =  35e3;
    double d1 = 12E4;
    cout << f1 << endl;
    cout <<  d1 << endl;
    cout << endl;

    cout <<"-----------------KIEU BOOLEAN--------------" << endl;
    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun; //outputs 1 (true)
    cout << isFishTasty << "\n";
    cout << endl;

    cout <<"-------------------CHAR--------------------" << endl;
    char myGrade = 'B';
    cout << myGrade;
    cout << endl;

    //vi du khac
    char a = 75, b = 55, c = 67; //mã ASCII Số 75 sẽ đại diện chữ K, same...
    cout << a;
    cout << b;
    cout << c << "\n";
    cout << endl;

    cout <<"-------------------STRING------------------" << endl;
    /*Kiểu này stringđược dùng để lưu trữ một chuỗi ký tự (văn bản). 
    Đây không phải là kiểu tích hợp sẵn*/
    string greeting = "Hello";
    cout << greeting << "\n";

    /*Để sử dụng chuỗi, bạn phải thêm một tệp tiêu đề 
    bổ sung vào mã nguồn, đó là <string>thư viện:*/
    string greeting1 = "Hello";
    cout << greeting1 << "\n";
    cout << endl;

    cout <<"---------------VI DU THUC TE---------------" << endl;
    int items = 50;
    double cost_per_item = 9.99;
    double total_cost = items * cost_per_item;
    char currency = '$';

    //print variables
    cout << "Number of items: " << items << "\n";
    cout << "Cost per item: " << cost_per_item << currency << "\n";
    cout << "Total cost = " << total_cost << currency << "\n";
    cout << endl;
}