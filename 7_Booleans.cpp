#include <iostream>
using namespace std;
int main (){
    cout << "----------BOOLEAN----------" << endl;
    cout << "---Boolean Values---" << endl;
    cout << "true (1) and false (0)" << endl;
    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << "Is coding fun: " << isCodingFun << "\n";
    cout << "Is fish tasty: " << isFishTasty << "\n";
    cout <<  endl;

    cout << "---Boolean Expressions---" << endl;
    int x = 10;
    int y = 9;
    cout << "-Greater than" << endl;
    cout << "x > y ket qua: " << (x > y) << "\n"; //returns 1 (true), because 10 ís higher than 9 
    cout << "----" << endl;
    cout << "-Even easier" << endl;
    cout << " 10 > 9 ket qua: " << (10 > 9) << "\n";
    cout << "----" << endl;
    cout << "-equal to (==)" << endl;
    cout << "x == 10 ket qua: " << (x == 10) << "\n";
    cout << "----" << endl;
    cout << "10 == 15 Ket qua: " << (10 == 15) << "\n";
    cout << endl;

    cout << "---Real Life Example---" << endl;
    cout << "EX1" << endl;
    int myAge = 20;
    int votingAge = 18;
    cout << "(my Age > voting Age) Ket qua: " << (myAge >= votingAge) << "\n";
    //allowed to vote!

    cout << "EX2" << endl;
    int myAge1 = 21;
    int votingAge1 = 18;
    if(myAge1 >= votingAge1) {
        cout << "Du tuoi de bo phieu!";
    } else {
        cout << "Not old enough to vote.";
    }
    cout << endl;

}