/* 01_ASCII_Value_of_Char.cpp */
#include<iostream>
using namespace std;
int main() {
    char ch = 'S';
    cout << "ASCII value of " << ch << " is: " << int(ch) << endl;
    return 0;
}
  
/* 02_Print_Upper_Lower_Case_ASCII.cpp */
#include <iostream>
using namespace std;
int main() {
    cout << "ASCII values of uppercase letters:\n";
    for (int i = 'A'; i <= 'Z'; i++) cout << i << " ";
    cout << "\nASCII values of lowercase letters:\n";
    for (int i = 'a'; i <= 'z'; i++) cout << i << " ";
    return 0;
}

/* 03_Input_Char_ASCII_Value.cpp */
#include <iostream>
using namespace std;
int main() {
    char ch;
    cin >> ch;
    cout << "ASCII Value is: " << int(ch) << endl;
    return 0;
}

/* 04_Upper_to_Lower_Char.cpp */
#include<iostream>
using namespace std;
int main() {
    char upper;
    cin >> upper;
    char lower = upper + 32;
    cout << "Lowercase: " << lower << endl;
    return 0;
}

/* 05_Print_All_ASCII_Chars.cpp */
#include <iostream>
using namespace std;
int main() {
    for (int i = 0; i <= 127; i++) cout << char(i) << " ";
    return 0;
}

/* 06_Char_Type_Identifier.cpp */
#include<iostream>
using namespace std;
int main() {
    char ch;
    cin >> ch;
    if (ch >= '0' && ch <= '9') cout << "Digit" << endl;
    else if (ch >= 'A' && ch <= 'Z') cout << "Uppercase" << endl;
    else if (ch >= 'a' && ch <= 'z') cout << "Lowercase" << endl;
    else cout << "Special Character" << endl;
    return 0;
}
