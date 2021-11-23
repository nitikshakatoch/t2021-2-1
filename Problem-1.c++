#include <iostream>
#include <math.h>

using namespace std;

class Calci {
    double a, b;
public:
    void get() {
        cout << "Enter First Number: ";
        cin >> a;
        cout << "Enter Second Number: ";
        cin >> b;
    }
    double add() {
        return a + b;
    }
    double sub() {
        return a - b;
    }
    double mul() {
        return a * b;
    }
    double div() {
        if (b == 0) {
            cout << "We are dividing by Zero which will give us" << endl;
            return INFINITY;
        }
        else {
            return a / b;
        }
    }
};
int main() {
    int choice;
    Calci cal;
    cout << "Enter 1 to Add "
        << "\nEnter 2 to Subtract "
        << "\nEnter 3 to Multiply"
        << "\nEnter 4 to Divide "
        << "\nEnter any other digit to Exit"
        << "\n";
    do {
        cout << "\nEnter Choice: ";
        cin >> choice;
        if(choice == 1){
           cout << "You have chosen Add\n";
        }
        if(choice == 2){
           cout << "You have chosen Subtract\n";
        }
        if(choice == 3){
            cout << "You have chosen Multiply\n";
        }
        if(choice == 4){
            cout << "You have chosen Divide\n";
        }
    
        switch (choice) {
        case 1:
            cal.get();
            cout << "Result after adding: " << cal.add() << endl;
            break;
        case 2:
            cal.get();
            cout << "Result after substracting: " << cal.sub() << endl;
            break;
        case 3:
            cal.get();
            cout << "Result after multiplying: " << cal.mul() << endl;
            break;
        case 4:
            cal.get();
            cout << "Result after dividing: " << cal.div() << endl;
            break;
        }
    } while (choice >= 1 && choice <= 4);
    return 0;
}
