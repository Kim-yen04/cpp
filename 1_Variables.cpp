#include <iostream>
using namespace std;
int main (){
    cout << "---------------KHAI BAO BIEN - VARIABLES---------------" << endl;
    cout << "===Khai bao (tao bien)===" << endl;
    // type variableName = value;
    // ex1
    int myNum = 20;
    cout << "- Example 1" << endl;
    cout << "my Num: " << myNum << "\n";
    cout << ".........................." << endl;

    // ex2
    int myNum1;
    myNum1 = 15;
    cout << "- Example 2" << endl;
    cout << "my Num1: " << myNum1 << "\n";
    cout << ".........................." << endl;

    //ex3
    int myNum2 = 15;
    myNum2 = 20;
    cout << "- Example 3" << endl;
    cout << "Ghi de la gia tri truoc do!" << endl;
    cout << "my Num2: " << myNum2 << "\n";
    cout << ".........................." << endl;

    //ex4
    int myNum3 = 5;
    double myFloatNum = 5.99;
    char myLetter = 'B';
    string myText = "Hello";
    bool myBoolean = true;
    cout << "===Cac loai khac===" << endl;
    cout << "- Example 4" << endl;
    cout << "my Num3 (int): " << myNum3 << "\n";
    cout << "My float num (double): " << myFloatNum << "\n";
    cout << "My letter (char): " << myText << "\n";
    cout << "My boolean (bool): " << myBoolean << "\n";
    cout << endl;

    cout << "------------------HANG SO - CONSTANTS------------------" << endl;
    const int minutesPerHour = 60;
    // myNum = 10; error
    cout << minutesPerHour << endl;
    // cout << myNum << endl; error
    cout << endl;

    cout <<"--------------------AP DUNG THUC TE---------------------" << endl;
    cout << "===Student data===" << endl;
    // variable thực tế
    // Student data
    int studentID = 555;
    int studentAge = 20;
    float studentFee = 75.25;
    char studentGrade = 'B';
    //Print variables
    cout << "Student ID: " << studentID << endl;
    cout << "Student Age: " << studentAge << endl;
    cout << "Student Fee: " << studentFee << endl;
    cout << "Student Grade: " << studentGrade << endl;
    cout << endl;

    cout << "===Tinh dien tich hinh chu nhat===" << endl;
    // Create integer variables
    int length = 4;
    int width = 6;
    int area;

    area = length * width;
    
    // Print the variables
    cout << "Length is: " << length << endl;
    cout << "Width is: " << width << endl;
    cout << "Area of the rectangle is: " << area << endl;
    cout << endl;

}