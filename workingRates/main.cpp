#include <iostream>

using namespace std;

int main()
{
    string emp_type;
    int pfnum;
    int bs = 20000;
    int h_all = 3500;
    int w_all = 2500;
    string name;
    int id;
    string gender;
    string dob;
    int days;
    int gs;
    int net;


    cout << "Enter the following details. \n";
    cout << "Name : \n";
    cin >> name;
    cout << "ID number  : \n";
    cin >> id;
    cout << "Gender : \n";
    cin >> gender;

    cout << "Enter Employee Type To Proceed \n";
    if(emp_type == "casual"){
        cout << "Enter the number of days you have worked for: \n";
        cin >> days;
        gs = 200 * days;
        net = gs * 0.8;
    } else {
        cout << "Enter PF Number: \n";
        cin >> pfnum;
        gs = bs + h_all + w_all;
        net = gs * 0.8;
        cout << pfnum;
    }

    cout << name<<endl;
    cout << id<<endl;
    cout << gender<<endl;
    cout << gs<<endl;
    cout << "Your net salary is: "<<net<<endl;
    return 0;
}
