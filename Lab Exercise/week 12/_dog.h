#include <string>
#include <locale>

using namespace std;
struct comma : numpunct<char> {
    char do_thousands_sep() const {return ',';}
    string do_grouping() const {return "\3";}
};
class paySlip: public comma{
    private:
        string mName;
        char mPayGrade;
        int mOverTimeHours, mFixedPay;
        int const  mSSS = 500, mPagIbig = 200, mPhilHealth = 100;
        int mFixPay;
        double mBasicSalary, mOverTimePay, mGrossPay, mNetPay, mWithHoldingTax, mTaxRate;
    public:
    //Mehtods
    void computePay();
    void determinePayGradeAndTaxRate();
    //setters
    void setName(string);
    void setOverTimeHours(int);
    void setBasicSalary(double);
    //getters
    string getName();
    char getPayGrade();
    int getOverTimeHours();
    double getBasicSalary(), getOverTimePay(), getGrossPay(), getNetPay(), getWithHoldingTax();

    paySlip(const string name = "",int overTimeHours = 1, double basicSalary = 10000)
    : mName{name},mOverTimeHours{overTimeHours}, mBasicSalary{basicSalary}{}
};

void paySlip::determinePayGradeAndTaxRate() {
    if(mBasicSalary < 20000){
        if( mBasicSalary < 15000){
            mPayGrade= 'A';
             }
        else{ mPayGrade='B';
        }
        mTaxRate=0.1;
    }
    else if(mBasicSalary < 30000){
        if (mBasicSalary < 25000){
            mPayGrade='A';
            }
        else{ mPayGrade='B';
        }
        mTaxRate=0.15;
    }
    else if (mBasicSalary < 40000){
        if (mBasicSalary < 35000){
        mPayGrade='A';
        }
        else { mPayGrade='B';
        }
        mTaxRate=0.2;
    }
    else if (mBasicSalary < 50000){
        if (mBasicSalary < 45000 ){
        mPayGrade='A';
        }
        else { mPayGrade='B';
        }
        mTaxRate=0.25;}
    else if(mBasicSalary < 55000){
            mPayGrade='A';
            }
    else {
           mPayGrade='B';
           mTaxRate=0.3;
    }
}
    void paySlip::computePay() {
       mFixedPay=mSSS+mPagIbig+mPhilHealth ;
       mOverTimePay=mOverTimeHours * mBasicSalary * 0.1;
       mGrossPay = mBasicSalary + mOverTimePay;
       mWithHoldingTax = mGrossPay * mTaxRate;
       mNetPay = mGrossPay - mWithHoldingTax - mFixedPay;
    }
    //Setter
    void paySlip::setName(string  name){mName=name;}
    void paySlip::setBasicSalary(double basicSalary){mBasicSalary=basicSalary;}
    void paySlip::setOverTimeHours(int overTimeHours){ mOverTimeHours=overTimeHours;}
    //Gettters
    string paySlip::getName(){return mName;}
    double paySlip::getBasicSalary(){return mBasicSalary;}
    double paySlip::getOverTimePay(){return mOverTimePay;}
    double paySlip::getGrossPay(){return mGrossPay;}
    double paySlip::getNetPay(){return mNetPay;}
    int paySlip::getOverTimeHours(){return mOverTimeHours;}
    double paySlip::getWithHoldingTax(){return mWithHoldingTax;}
    char paySlip::getPayGrade(){return mPayGrade;}


