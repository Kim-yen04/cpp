#include <iostream>
#include <string>
using namespace std;
int main (){
    cout << "---------------------STRINGS--------------------" << endl;
    cout << "---String greeting add #string!---" << endl;
    string greeting = "Hello";
    cout << greeting << "\n";
    cout << endl;

    cout << "--------------STRING CONCATENATION--------------" << endl;
    string firstName = "John";
    string lastName = "Doe";
    cout << "Khong co dau " "" << endl;
    string fullName1 = firstName + lastName;
    cout << fullName1 << "\n";
    cout << "---------" << endl;
    cout << "Co dau " "" << endl;
    string fullName2 = firstName + " " + lastName;
    cout << fullName2 << "\n";
    cout << endl;

    cout << "---Append---" << endl;
    string firstName1 = "Duong ";
    string lastName1 = "Yen";
    string fullName3 = firstName1.append(lastName1);
    cout << "Full name (append): " << fullName3 << "\n";
    cout << endl;

    cout << "--------------NUMBERS AND STRINGS--------------" << endl;
    cout << "---Adding Numbers and Strings---" << endl;
    int x = 10;
    int y = 20;
    int z = x + y;
    cout << "Add two numbers:" << endl;
    cout << x << " + " << y << "(int)= " << z << "\n";
    cout << "-------" << endl;
    cout << "Add two strings:" << endl;
    string x1 = "10";
    string y1 = "20";
    string z1 = x1 + y1;
    cout << x1 << " + " << y1 << "(string)= " << z1 << "\n";
    cout << endl;

    cout << "-----------------STRING LENGTH-----------------" << endl;
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "---length---" << endl;
    cout << "The length of the txt string is: " << txt.length() << "\n";
    cout << "---size---" << endl;
    cout << "The length of the txt string is: " << txt.size() << "\n";
    cout << endl;

    cout << "-----------------ACCESS STRINGS----------------" << endl;
    cout << "---Access strings---" << endl;
    string myString = "Hello Kim Yen";
    cout << "vi tri dau: " << myString[0] << "\n"; //outputs H
    cout << "vi tri thu 1: " << myString[1] << "\n";
    cout << "vi tri thu 7: " << myString[7] << "\n";  //Dấu cách ko tính giá trị
    //mot dang khac:
    cout << "Lay vi tri cuoi cung: " << myString[myString.length() - 1] << "\n"; //lay vi tri cuoi cung
    cout << endl;

    cout << "---Change String Characters---" << endl;
    string myString1 = "Yenj";
    myString1[3] = 'n';
    cout << "Yenj day thay doi thanh: " << myString1 << "\n";
    cout << endl;

    cout << "---The at() function---" << endl;
    string myString2 = "Kim Yenn";
    cout << "My string output: " << myString2 << "\n";
    cout << "Fist character: " << myString2.at(0) << "\n";
    cout << "Second character: " << myString2.at(1) << "\n";
    cout << "Last character: " << myString2.at(myString2.length() - 1) << "\n";
    
    myString2.at(0) = 'k';
    cout << "Kim Yenn -> " << myString2 << "\n";
    cout << endl;

    cout << "----------------SPECIAL CHARACTERS-------------" << endl;
    cout << "---Strings - Special Characters---" << endl;
    // string txt1 = "We are the so-called "Vikings" from the north.";
    // cout << txt1;
    string txt2 = "We are the so-called \"Vikings\" from the north.";
    cout << txt2 << endl;
    string txt3 = "It\'s alright.";
    cout << txt3 << endl;
    string txt4 = "The character \\ is called backslash.";
    cout << txt4 << endl;

    cout << "----------------USER INPUT STRINGS-------------" << endl;
    cout << "---User Input strings---" << endl;
    string firstName2;
    cout << "Type your first name: ";
    cin >> firstName2; // get user input from the keyboard
    cout << "Your name is: " << firstName2 << "\n";
    cout << endl;

    cout << "fail mot chut!!!" << endl;
    string fullName4;
    cout << "Type your full name: ";
    getline (cin, fullName4);
    cout << "Your name is (getline): " << fullName4 << "\n";
    cout << endl;

    cout << "----------OMITTING NAMESPACENAMESPACE----------" << endl;
    cout << "---Bo qua khong gian ten---" << endl;
    std::string greeting1 = "Hello";
    std::cout << greeting1 << "\n";
    cout <<  endl;

    cout << "-----------------STYLE STRINGS-----------------" << endl;
    string greeting2 = "Hello";
    char greeting3[] = "Hello";
    cout << "greeting 2: " << greeting2 << "\n";
    cout << "--------" << endl;
    cout << "greeting 3: " << greeting3 << "\n";

return 0;
}