// translate roman numerals to numerical value 

#include <iostream>
#include <string>  

using namespace std;

int romanCharValue(char r);

int main() {
    int tot = 0;
    string romanNum;
    // int val; 
    cout << "Enter Roman number or Q to quit ";
    cin >> romanNum;

    int len = romanNum.length();


    for (int i = 0; i < len; i++) {

        if (romanCharValue(romanNum[i]) >= romanCharValue(romanNum[i + 1]) || len == 1) {
            tot += romanCharValue(romanNum[i]);
            cout << "i=" << i << endl;
            //total += val;
        }
        else {
            tot += romanCharValue(romanNum[i + 1]) - romanCharValue(romanNum[i]);
            i++;
        }

    }
    cout << romanNum << "=" << tot;


    return 0;

}

int romanCharValue(char r) {

    //    int total = 0;


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
    /*
        while (r >= 1) {
            int total = 0;

            if (r >= r || r == 1) {

                total = r + r;
                r--;
            }
            else {
                total + (r - r);
                r--;
            }
        }
        //While the roman number string is not empty
        //If the first character has a larger or equal value than the second,
        //or the string has length 1
        //Add value(first character) to total.
        //Remove the character.
        //Else
        //Add the quantity: value(second character) - value(first character) to total.
        //Remove both characters.
        */

}

