#include <windows.h>
#include <iostream>

using namespace std;

int main()
{
    cout << "************************\n";
    for(int i = 0; i <= 70; i++){
        cout << "*                      *\n";
        for(int j = 70; j>= 10; j--){
            Sleep(j);
        }
    }
    cout << "************************\n";
    return 0;
}
