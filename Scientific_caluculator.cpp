#include <iostream>
#include <cmath>
#include <unistd.h>
using namespace std;
class Basic {
    double N1, N2;
public:
    Basic() {}
    Basic(double N1, double N2) {
        this->N1 = N1;
        this->N2 = N2;
    }
    void Operations(void) {
        cout << "\t\t\t  OPERATIONS" << endl << endl;
        cout << "Basic operations: " << endl;
        cout << "1) +" << endl;
        cout << "2) -" << endl;
        cout << "3) *" << endl;
        cout << "4) /" << endl << endl;
        sleep(2);
    }
    void Add(void) {
        cout << N1 << " + " << N2 << " = " << N1 + N2 << endl;
    }
    void Sub(void) {
        cout << N1 << " - " << N2 << " = " << N1 - N2 << endl;
    }
    void Product(void) {
        cout << N1 << " * " << N2 << " = " << N1 * N2 << endl;
    }
    void Quotient(void) {
        cout << N1 << " / " << N2 << " = " << N1 / N2 << endl;
    }
};

class Scientific {
    double Y1;
public:
    Scientific() {}
    Scientific(double Y1) {
        this->Y1 = Y1;
    }
    void Operations(void) {
        cout << "Scientific operations: " << endl;
        cout << "5) |x|" << endl;
        cout << "6) e^x" << endl;
        cout << "7) 2^x" << endl;
        cout << "8) ln(x)" << endl;
        cout << "9) log10(x)" << endl;
        cout << "10) log2(x)" << endl;
        cout << "11) Square root (x)" << endl;
        cout << "12) Cube root (x)" << endl;
        cout << "13) Ceil (computes integer not less than given value)" << endl;
        cout << "14) Floor (computes integer less than given value)" << endl << endl;
        sleep(2);

    }
    void Mod(void) {
        cout << "| " << Y1 << " |  = " << abs(Y1) << endl;
    }
    void e_x(void) {
        cout << "e^" << Y1 << " = " << exp(Y1) << endl;
    }
    void _2_x(void) {
        cout << "2^" << Y1 << " = " << exp2(Y1) << endl;
    }
    void ln_x(void) {
        cout << "ln(" << Y1 << ")" << " = " << log(Y1) << endl;
    }
    void log10_x(void) {
        cout << "log10(" << Y1 << ")" << " = " << log10(Y1) << endl;
    }
    void log2_x(void) {
        cout << "log2(" << Y1 << ")" << " = " << log2(Y1) << endl;
    }
    void square_root(void) {
        cout << Y1 << "^1/2" << " = " << sqrt(Y1) << endl;
    }
    void cube_root(void) {
        cout << Y1 << "^1/3" << " = " << cbrt(Y1) << endl;
    }
    void ceil_(void) {
        cout << Y1 << " Ceil = " << ceil(Y1) << endl;
    }
    void floor_(void) {
        cout << Y1 << " floor = " << floor(Y1) << endl;
    }
};

class Trignometric {
    double X;
public:
    Trignometric() {}
    Trignometric(double X) {
        this->X = X;
    }
    void Operations(void) {
        cout << "Trignometric operations: " << endl;
        cout << "15) sin(x)" << endl;
        cout << "16) cos(x)" << endl;
        cout << "17) tan(x)" << endl;
        cout << "18) cosec(x)" << endl;
        cout << "19) sec(x)" << endl;
        cout << "20) cot(x)" << endl << endl;
        cout << "Hyperbolic operations: " << endl;
        cout << "21) sinh(x)" << endl;
        cout << "22) cosh(x)" << endl;
        cout << "23) tanh(x)" << endl;
        cout << "24) cosech(x)" << endl;
        cout << "25) sech(x)" << endl;
        cout << "26) coth(x)" << endl << endl;
        sleep(2);
    }
    void sine(void) {
        cout << "Sin(" << X << ") = " << sin(X) << endl;
    }
    void cos_(void) {
        cout << "Cos(" << X << ") = " << cos(X) << endl;
    }
    void tan_(void) {
        cout << "Tan(" << X << ") = " << tan(X) << endl;
    }
    void cosec(void) {
        cout << "Cosec(" << X << ") = " << (1 / sin(X)) << endl;
    }
    void sec(void) {
        cout << "Sec(" << X << ") = " << (1 / cos(X)) << endl;
    }
    void cot(void) {
        cout << "Cot(" << X << ") = " << (cos(X) / sin(X)) << endl;
    }
    void sine_h(void) {
        cout << "Sinh(" << X << ") = " << sinh(X) << endl;
    }
    void cos_h(void) {
        cout << "Cosh(" << X << ") = " << cosh(X) << endl;
    }
    void tan_h(void) {
        cout << "Tanh(" << X << ") = " << tanh(X) << endl;
    }
    void cosech(void) {
        cout << "Cosech(" << X << ") = " << (1 / sinh(X)) << endl;
    }
    void sech(void) {
        cout << "sech(" << X << ") = " << (1 / cosh(X)) << endl;
    }
    void coth(void) {
        cout << "Coth(" << X << ") = " << (cosh(X) / sinh(X)) << endl;
    }
};

class Calculator : public Basic, public Scientific, public Trignometric {
    public:
    Calculator(){
        Basic::Operations();
        Scientific::Operations();
        Trignometric::Operations();
    }
    Calculator(double X1, double X2 = 0) : Basic(X1, X2), Scientific(X1), Trignometric(X1){}
    void Operations(int x) {
        switch (x) {
            case 1: Add(); break;
            case 2: Sub(); break;
            case 3: Product(); break;
            case 4: Quotient(); break;
            case 5: Mod(); break;
            case 6: e_x(); break;
            case 7: _2_x(); break;
            case 8: ln_x(); break;
            case 9: log10_x(); break;
            case 10: log2_x(); break;
            case 11: square_root(); break;
            case 12: cube_root(); break;
            case 13: ceil_(); break;
            case 14: floor_(); break;
            case 15: sine(); break;
            case 16: cos_(); break;
            case 17: tan_(); break;
            case 18: cosec(); break;
            case 19: sec(); break;
            case 20: cot(); break;
            case 21: sine_h(); break;
            case 22: cos_h(); break;
            case 23: tan_h(); break;
            case 24: cosech(); break;
            case 25: sech(); break;
            case 26: coth(); break;
            default: break;
        }
    }
};

int main() {
    int x;
    cout << "-------------------------- CASIO -------------------------------" << endl << endl;
    Calculator calculator;
    do{
        double X1, X2;
        cout << "Enter operation number: ";
        std::cin >> x;
        if(x > 0 && x < 5){
            cout << "N1 = "; cin >> X1;
            cout << "N2 = "; cin >> X2;
            calculator = Calculator(X1, X2);
        }
        else if (x < 27){
            cout << "X = "; cin >> X1;
            calculator = Calculator(X1);
        }
        else {
            cout << "Invalid operation number." << endl;
        }
        calculator.Operations(x);
        cout << endl << "EXIT? " << endl
        << "1) YES" << endl
        << "2) NO" << endl;
        cin >> x;
    }while (x == 2);
    cout << "Quitting..." << endl;
    sleep(1);
    return 0;
}