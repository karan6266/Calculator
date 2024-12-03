#include <iostream>
using namespace std;

class Calculator {
public:
    float add(float a, float b) {
        return a + b;
    }

    float subtract(float a, float b) {
        return a - b;
    }

    
    float multiply(float a, float b) {
        return a * b;
    }

    
    float divide(float a, float b) {
        if (b != 0) {
            return a / b;
        } else {
            cout <<" Division by zero is not allowed!" << endl;
            return 0;
        }
    }
    float percentage(float a,float b){
        return (a/b)*100;
    }
    
};

int main() {
    float n1,n2;
    int s;
    Calculator calc;

    cout << "-----------------------WELCOME TO CALCULATER--------------------" << endl;
    

    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;
    cout << "Enter a number for opration:"<<endl;
    cout <<"1. Addition"<<endl;
    cout<<"2. Subtract"<<endl;
    cout<<"3. Multiply"<<endl;
    cout<<"4. Divide "<<endl;
    cout<<"5. Percentage"<<endl;
    cin >> s;

    
    switch(s) {
        case 1:
            cout << "Result: " << calc.add(n1, n2) << endl;
            break;
        case 2:
            cout << "Result: " << calc.subtract(n1, n2) << endl;
            break;
        case 3:
            cout << "Result: " << calc.multiply(n1, n2) << endl;
            break;
        case 4:
            cout << "Result: " << calc.divide(n1, n2) << endl;
            break;
        case 5:
        cout<<"Result: "<<calc.percentage(n1,n2) <<"%"<< endl;
        break;
        default:
            cout << " Invalid Case!" << endl;
    }

    return 0;
}
