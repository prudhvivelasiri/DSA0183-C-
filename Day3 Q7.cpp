#include <iostream>
using namespace std;
class Programmer {
public:

    Programmer(double bp) : basic_pay(bp) {}
    void generatePaySlip() const {
        double da = 0.97 * basic_pay; 
        double hra = 0.10 * basic_pay; 
        double pf = 0.12 * basic_pay; 
        double club_fund = 0.001 * basic_pay; 
        double gross_pay = basic_pay + da + hra;
        double net_pay = gross_pay - pf - club_fund;
        cout << "=======================\n";
        cout << "PROGRAMMER PAYMENT SLIP\n";
        cout << "=======================\n";
        cout << "BASIC PAY => " << basic_pay << endl;
        cout << "DEARNESS ALLOWANCE => " << da << endl;
        cout << "HOUSE RENT ALLOWANCE => " << hra << endl;
        cout << "PROVIDENT FUND => " << pf << endl;
        cout << "CLUB FUND => " << club_fund << endl;
        cout << "GROSS PAY => " << gross_pay << endl;
        cout << "NET PAY => " << net_pay << endl;
    }
private:
    double basic_pay;
};
int main() {
    double basic_pay;
    cout << "ENTER THE BASIC PAY OF THE PROGRAMMER => ";
    cin >> basic_pay;
    Programmer programmer(basic_pay);
    programmer.generatePaySlip();

    return 0;
}
