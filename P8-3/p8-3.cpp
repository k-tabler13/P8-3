// translate roman numerals to numerical value. 
 
#include <iostream>
#include <string> 

int romanCharValue(char r); 

int main() {
    int tot;  

    cout << romanCharValue(tot); 

    return 0;

} 

int romanCharValue(char r) { 

    int tot; 

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

    while (r >= 1) {

        tot = r + r; 
       

    }

}