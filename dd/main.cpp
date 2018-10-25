#include <iostream>
using namespace std;
class make{
    private:
        string gggg;
    public:
        make(){
            gggg="nnnnnnnnnn";
        }
        make(string te){
            gggg=te;
        }

        void bh(){
            cout << "jjjjjjjj"<<gggg;
        }
};
int main()
{
    // Initialize 2D array
    char colour[4][10] = {
        "Blue manr",
        "Red wap",
        "Orange",
        "Yellow"};

    // Printing Strings stored in 2D array
    make bo(colour[1,2]);
    bo.bh();

    return 0;
}
