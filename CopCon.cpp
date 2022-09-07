// Fransiskus Agapa
// Definition of class CopCon

#include "CopCon.h"
#include <iostream>

using std::cout;
using std::endl;

// default constructor
CopCon::CopCon()
{
    cout << "= Default Constructor =" << endl;
    _data = new double;                     // allocate new memory
    *_data = 99.9;                          // set default value
    cout << "= Class Object Created =" << endl;
}

// value setter
void CopCon::SetData(const double& theData)
{
    cout << "= Value Setter Called =" << endl;
    _data = new double;                     // allocate new memory
    *_data = theData;                       // assign a given data
}

// value getter
double CopCon::GetData() const
{
    cout << "= Value Getter Called =" << endl;
    return *_data;                         // return whtvr value in data member
}

// copy constructor
CopCon::CopCon(const CopCon &theData)
{
    cout << "= Copy  Constructor Called =" << endl;
    _data = new double;
    *_data = *theData._data;
}

// destructor
CopCon::~CopCon()
{
    cout << "= Destructor Called =" << endl;
    delete _data;                          // deallocate allocated memory
}
