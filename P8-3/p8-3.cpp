// translate roman numerals to numerical value 
 
#include <iostream>
#include <string> 

int romanCharValue(char r); 

int main() {
 
    cout << "Value of I: " << romanCharValue('I') << "\n";
    cout << "Value of V: " << romanCharValue('V') << "\n"; 
    cout << "Value of X: " << romanCharValue('X') << "\n"; 
    cout << "Value of L: " << romanCharValue('L') << "\n";
    cout << "Value of C: " << romanCharValue('C') << "\n"; 
    cout << "Value of D: " << romanCharValue('D') << "\n"; 
    cout << "Value of M: " << romanCharValue('M') << "\n"; 
    cout << "Value of A: " << romanCharValue('A') << "\n"; 

    return 0;

} 

int romanCharValue(char r) {
    switch (r) {
    case 'I': return 1;
    case 'V': return 5;
    case 'X': return 10;
    case 'L': return 50;
    case 'C': return 100;
    case 'D': return 500;
    case 'M': return 1000;
    default: return 0; 
    }
}