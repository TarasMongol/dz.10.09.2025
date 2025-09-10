#include <iostream>
using namespace std;

class Deter {
private:
    int numerat;
    int denom;

public:
    void Init(int number, int den) {
        numerat = number;
        denom = denom;
    }

    void Print() {
        cout << numerat << "/" << denom << endl;
    }

    void SetNumerat(int num) {
        numerat = num;
    }

    int GetNumerat() {
        return numerat;
    }

    void SetDenom(int denom) {
        denom = denom;
    }

    int GetDenom() {
        return denom;
    }
};

int main() {
    Deter f;

    f.Init(3, 4);
    f.Print();

    f.SetNumerat(5);
    f.Print();

    int d = f.GetDenom();
    cout << "denom:  " << d << endl;
}