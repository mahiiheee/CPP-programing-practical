// Practical 01: C++ Fundamentals
// Shows: data types, const, variables, operators, cin/cout
#include <iostream>
#include <string>
using namespace std;

int main() {
    // const = value that can NEVER change after it is set
    const float PASS_PERCENT = 40.0;

    // Variables of different data types
    string name;       // text
    int age;           // whole number
    float m1, m2, m3;  // marks (decimal numbers)
    char grade;        // single character
    bool isPass;       // true / false

    // Input using cin
    cout << "Enter your name: ";
    getline(cin, name);          // getline reads full line (with spaces)
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter marks of 3 subjects (out of 100): ";
    cin >> m1 >> m2 >> m3;

    // Arithmetic operators: + / 
    float total = m1 + m2 + m3;
    float percent = total / 3;

    // Relational operators: >= < ==  and Logical operators: && || !
    isPass = (percent >= PASS_PERCENT) && (m1 >= 0 && m2 >= 0 && m3 >= 0);

    if (percent >= 75)      grade = 'A';
    else if (percent >= 60) grade = 'B';
    else if (percent >= PASS_PERCENT) grade = 'C';
    else                    grade = 'F';

    // Output using cout
    cout << "\n------ RESULT ------\n";
    cout << "Name       : " << name << endl;
    cout << "Age        : " << age << endl;
    cout << "Total      : " << total << endl;
    cout << "Percentage : " << percent << "%" << endl;
    cout << "Grade      : " << grade << endl;
    cout << "Status     : " << (isPass ? "PASS" : "FAIL") << endl;

    // Size of data types
    cout << "\nmSize of data types (bytes)\n";
    cout << "int: " << sizeof(int) << ", float: " << sizeof(float)
         << ", double: " << sizeof(double) << ", char: " << sizeof(char)
         << ", bool: " << sizeof(bool) << endl;
    return 0;
}