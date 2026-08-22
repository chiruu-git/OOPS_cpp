/* 
constructor:
    special method invoked automatically at time of object creation
    used for initialisation.

    - same name as class
    - constructor doesn't have a return type
    - only called once (automatically), at object creation time
    - memory allocation happens when constructor is called


types of constructor;
    - non parameterised
    - parameterise
    - copy constructors
 */
#include <bits/stdc++.h>
using namespace std;

class Student{
public:
    string student_name;
    string college_name;
    int usn;
/*     
    // non parameterised/
    Student(){
        cout << "Constructor called !!" << '\n';
        college_name = "NIE MYsore";
    }
 */
    //parameterised
    Student(string sn, string cn, int u){
        student_name = sn;
        college_name = cn;
        usn = u;
    }
};

void print(Student s){
    cout << s.college_name << '\n';
    cout << s.student_name << '\n';
    cout << s.usn << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
/*     
    // non parameterised
    Student s1;
    s1.student_name = "Chirag";
    cout << s1.student_name << "\n" << s1.college_name << '\n';

 */
    //parameterised constructor
    Student s2("Chirag","NIE MYSORE",404);
    print(s2);

    return 0;
}