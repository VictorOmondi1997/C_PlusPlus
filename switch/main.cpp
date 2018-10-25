// C++ Program to calculate grade of student
#include <iostream>
using namespace std;

int main() {
    int score, i, average;
    float total=0;

    cout<< "Enter marks of 5 subjects\n";

    for(i=0; i<5; i++) {
 cin >> score;
 total += score;
    }

    average = total/5;

    cout<<"Grade : ";
    switch(average/10) {
       case 9 :
           cout << "A";
           break;
       case 8 :
       case 7 :
           cout << "B";
           break;
       case 6 :
       case 5 :
           cout << "C";
           break;
       default :
           cout << "D";
    }

    cout << endl<<average;
    return 0;
}
