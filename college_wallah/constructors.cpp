#include <bits/stdc++.h>
using namespace std;

// User defined datatype
class Student {
public:
    string name;
    int rno;
    float gpa;

    Student(string s, int r, float g){ // parameterised constructor
        name = s;
        rno =r ;
        gpa = g;

    }
};

int main() {

    Student s1("chirag" , 20, 8.2);

    cout << s1.name << " " << s1.rno << " " << s1.gpa << '\n';


    // Student s1;

    // s1.name = "chirag";
    // s1.rno = 19;
    // s1.gpa = 7.5;

    // Student s2;

    // s2.name = "anand";
    // s2.rno = 29;
    // s2.gpa = 6.5;

    return 0;
}
