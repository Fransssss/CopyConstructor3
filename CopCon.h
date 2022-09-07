// Fransiskus Agapa
// class CopCon declaration

#ifndef COPYCONSTRUCTOR3_COPCON_H
#define COPYCONSTRUCTOR3_COPCON_H


class CopCon
{
private:
    double* _data;
public:
    CopCon();                                      // default constructor
    void SetData(const double& theData);           // data setter
    double GetData() const;                        // data getter
    CopCon(const CopCon& theData);                 // copy constructor
    ~CopCon();                                     // destructor
};


#endif //COPYCONSTRUCTOR3_COPCON_H
