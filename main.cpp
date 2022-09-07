// Fransiskus Agapa
// 9/6//22
// Practices make improvement - Have Fun !!!
// :)

// ===============
// user get to see and learn simple class default and copy constructor
// note:   it is not fixed, there is an issue with skipping class object from being created if not being used
// ===============


#include <iostream>
#include "CopCon.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
    cout << endl;
    string choice;                                            // user choice
    double dataDouble;                                        // user-input data (double)
    bool hasChoseOpOne = false;                               // indicate user has chosen option one at least once
    bool thereData = false;                                   // indicate user has put data into first class object or not
    cout << endl << "= Copy Constructor Learning =" << endl;
    cout << "1. Default Constructor" << endl;
    cout << "2. Copy Constructor" << endl;
    cout << "e. Exit" << endl;
    cout << "choice: ";
    cin >> choice;

    while(choice != "e" and choice != "E")
    {
        if(choice == "1")
        {
            if(!hasChoseOpOne)
            {
                cout << endl;
                CopCon oneObj;
                cout << oneObj.GetData() << endl;
                hasChoseOpOne = true;
            }
            else
            {
                string setValue;                                          // indicate whether user wants to set value to a created class object
                cout << endl;
                CopCon oneObj;
                cout << endl << "[ Default Constructor has been created ]" << endl;

                cout << endl << "Input a value: ";
                cin >> dataDouble;
                cout << endl;

                // value setter called
                oneObj.SetData(dataDouble);
                cout << oneObj.GetData() << endl;
                thereData = true;                                         // indicate a class object has been created and set with a value
            }
        }
        else if(choice == "2")
        {
            if(!thereData)
            {
                cout << endl << "[ A class object should be created first before create new class object to be assigned with its value ]" << endl;
            }
            else if(thereData)                                           // FIX ME - Skip create class object if user has not chosen the first option
            {
                cout << endl;
                CopCon oneObj;
                oneObj.SetData(dataDouble);

                CopCon twoObj = oneObj;
                cout << twoObj.GetData() << endl;

                cout << endl << "Input new value: ";
                cin >> dataDouble;
                cout << endl;

                twoObj.SetData(dataDouble);
                cout << twoObj.GetData() << endl;

            }
            CopCon twoObj;
        }
        else
        {
            cout << endl << "[ Invalid choice ]" << endl;
        }

        cout << endl << "= Copy Constructor Learning =" << endl;
        cout << "1. Default Constructor -> Set Value to Class Object " << endl;
        cout << "2. Copy Constructor" << endl;
        cout << "e. Exit" << endl;
        cout << "choice: ";
        cin >> choice;
    }

    if(choice == "e" or choice == "E")
    {
        cout << endl << "== Exit Program ==" << endl;
    }

    return 0;
}
