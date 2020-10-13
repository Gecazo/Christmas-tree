#include <iostream>
#include <string>
using namespace std;

int main(void) {
    char cTree;
    int iSize;
    int iSpace;
    int iChars;

    cout << "Christmas Tree Application" << endl;
    cout << "Enter the height of your christmas tree: ";
    cin >> iSize;
    cout << "Enter the character you would like to use for your tree: ";
    cin >> cTree;

    int leg = iSize - 1;
    string trunk = "||";


        for (int i = 0; i < iSize; i++) {
            iSpace = (iSize - i) - 1;
            iChars = (2 * i) + 1;
            string sSpace(iSpace, ' ');
            string sTree(iChars, cTree);
            cout << sSpace << sTree << endl;
        }
    cout << std::string(leg, ' ') << trunk << endl;


    return 0;
}