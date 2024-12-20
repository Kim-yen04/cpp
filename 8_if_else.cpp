#include <iostream>
using namespace std;
int main (){
    cout << "Nho hon a < b" << endl;
    cout << "Nho hon hoac bang a <= b" << endl;
    cout << "Lon hon a > b" << endl;
    cout << "Lon hon hoac bang" << endl;
    cout << "Bang a == b;" << endl;
    cout << "Khong bang a != b" << endl;
    cout << "----------------" << endl;
    cout << "if dieu kien thuc thi true, else dk thuc thi false\n else if dk moi de kiem tra, dieu kien dau tien la sai \nsu dung switch chi dinh nhieu khoi ma thay the thuc thi" << endl; 
    cout << endl;

    cout << "---Cau lenh if---" << endl;
    // if (condition) {
    //     //comment
    // }
    if (20 > 18) {
        cout << "20 is greater than 18" << endl;
    }
    cout << "----------" << endl;
    int x = 20;
    int y = 18;
    if (x > y){
        cout << "x is greater than y" << endl;
    }
    cout << endl;

    cout << "---Cau lenh else---" << endl;
    int time = 20;
    if (time < 18){
        cout << "Good day" << endl;
    }else{
        cout << "Good evening" << endl;
    }
    cout << endl;

    cout << "---Cau lenh else if---" << endl;
    int time1 = 22;
    if (time1 < 10) {
        cout << "Good Morning";
    } else if (time1 < 20){
        cout << "Good day" << endl;
    }else {
        cout << "Good evening" << endl;
    }
    cout << endl;

    cout << "---Short Hand If...Else (Ternary Operator)---" << endl;
    int time2 = 20;
    if (time2 < 18) {
        cout << "Good day." << endl;
    } else {
        cout << "Good evening." << endl;
    }
    cout << "----------" << endl;

    int time3 = 20;
    string result = (time3 < 18) ? "Good day." : "Good evening.";
    cout << result << "\n";
    cout << endl;

    cout << "---Real Life Example---" << endl;
    int doorCode = 1337;
    if (doorCode == 1337) {
        cout << "Correct code.\nThe door is now open.\n" << endl;
    } else {
        cout << "Wrong code.\nThe door is remians closed.\n" << endl;
    }
}