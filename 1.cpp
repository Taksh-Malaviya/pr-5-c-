#include <iostream>
using namespace std;

class Main {
protected:
    int A;
    int B;
    int C;

public:
    void print() {
        cout << "Enter number A: ";
        cin >> A;
        cout << "Enter number B: ";
        cin >> B;
    }

    void print1() {
        try {
            if (B == 0) {
                throw B;
            } else {
                C = A / B;
                cout << "Division is: " << C << endl;
            }
        } catch (int val) {
            if (val == 0) {
                cout << "Can't divide by zero...." << endl;
            }
        }
    }
};

int main() {
    Main m;
    m.print();
    m.print1();
    return 0;
}
