/* 
constructor:
    special method invoked automatically at time of object creation
    used for initialisation.

    - same name as class
    - constructor doesn't have a return type
    - only called once (automatically), at object creation time
    - memory allocation happens when constructor is called
 */
#include <bits/stdc++.h>
using namespace std;

class Student{
public:
    string student_name;
    string college_name;
    int usn;
    
    Student(){
        cout << "Constructor called !!" << '\n';
        college_name = "NIE MYsore";
    }
};
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    Student s1;
    s1.student_name = "Chirag";

    cout << s1.student_name << "\n" << s1.college_name << '\n';
    return 0;
}