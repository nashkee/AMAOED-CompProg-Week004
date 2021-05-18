#include <string>
#include <locale>

using namespace std;

struct comma : numpunct<char>{
    char do_thousand_sep() const{return ',';}
    string do_grouping() const {return "\3";}
};

class PaySlip : public comma {
    private:
    string mName;
    char mPayGrade;
    int mOverTimeHours;
    int const mSSS=500, mPagIbig=200, mPhilHealth=100;
    int mFixedPay;
    double mBasicSalary, mOverTimePay, mGrossPay,mNetPay,mWithHoldingTax, mTaxRate;

    public:
    //methods
    void determinePayGradeAndTaxRate();
    void computePay();

    //setters
    void setName(string);
    void setBasicSalary(double);
    void setOverTimeHours(int);
    //getters

    string getName();
    char getPayGrade();
    int getOverTimeHours();
    double getBasicSalary(), getOverTimePay(), getGrossPay(), getWithHoldingTax(), getNetPay();

    PaySlip(const string name = "", double basicSalary=10000, int overTimeHours = 1)
            : mName{name}, mBasicSalary{basicSalary} , mOverTimeHours{overTimeHours}{}
};

void PaySlip::setName(string name){
    mName=name;
}
void PaySlip::setBasicSalary(double basicSalary){
mBasicSalary = basicSalary;
}
void PaySlip::setOverTimeHours(int overTimeHours){
    mOverTimeHours=overTimeHours;
}
void PaySlip::determinePayGradeAndTaxRate(){
    if(mBasicSalary < 20000){
        if(mBasicSalary < 15000){
            mPayGrade= 'A';
        }
        else { mPayGrade= 'B';
        }
        mTaxRate=0.1;
    }
    else if(mBasicSalary < 30000){
        if(mBasicSalary < 25000){
            mPayGrade= 'A';
        }
        else { mPayGrade= 'B';
        }
        mTaxRate=0.15;
    }
    else if(mBasicSalary <40000){
        if(mBasicSalary < 35000){
            mPayGrade= 'A';
        }
        else { mPayGrade= 'B';
        }
        mTaxRate=0.20;
    }
    else if(mBasicSalary < 50000){
        if(mBasicSalary < 45000){
            mPayGrade= 'A';
        }
        else { mPayGrade= 'B';
        }
        mTaxRate=0.25;
    }
    else if(mBasicSalary < 55000){
            mPayGrade= 'A';}
    else{
        mPayGrade= 'B';
        mTaxRate=0.30;}
}
void PaySlip::computePay(){
    mFixedPay = mSSS + mPagIbig + mPhilHealth;
    mOverTimePay=mOverTimeHours * mBasicSalary * 0.10;
    mGrossPay=mBasicSalary + mOverTimePay;
    mWithHoldingTax=mGrossPay*mTaxRate;
    mNetPay= mGrossPay - mWithHoldingTax - mFixedPay;
}
//getters
    string PaySlip::getName(){return mName;}
    char PaySlip::getPayGrade(){return mPayGrade;}
    int PaySlip::getOverTimeHours(){return mOverTimeHours;}
    double PaySlip::getBasicSalary(){return mBasicSalary;}
    double PaySlip::getOverTimePay() {return mOverTimePay;}
    double PaySlip::getGrossPay() {return mGrossPay;}
    double PaySlip::getWithHoldingTax(){return mWithHoldingTax;}
    double PaySlip::getNetPay(){return mNetPay;}
