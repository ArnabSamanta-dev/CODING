#include <iostream>
#include <string>
using namespace std;

class bank {
public:
    string name;
    int amount;

    void display() {
        cout << " the " << name << " has " << amount << " in this sector " << endl;
    }
};

int main() {
    bank b1;
    b1.name = "sbi";
    b1.amount = 1000;
    b1.display();

    bank b2;
    b2.name = "hdfc";
    b2.amount = 2000;
    b2.display();

    return 0;
} 