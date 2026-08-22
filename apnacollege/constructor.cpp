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



this. 
    this is a special pointer in c++ that points to the current object
    this -> prop is same as *(this).prop
    It points directly to the memory address of the 
    specific object that called the function
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
    /* //parameterised
    Student(string sn, string cn, int u){
        student_name = sn;
        college_name = cn;
        usn = u;
    } */

   // this keyword (lets u use the same name as global vars)
    Student(string student_name, string college_name, int usn){
        this->college_name = college_name;
        this->student_name = student_name;
        this->usn = usn;
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