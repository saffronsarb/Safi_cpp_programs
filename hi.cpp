#include<iostream>
using namespace std;
class Student {

    int marks;
    Student(int m){
        marks = m;
    }
    friend ostream& operator<<(ostream& out, Student s){
        out << s.marks;
    }
};
int main(){
    

   /* cout<<"Hello World";
    int i =1;
    int j =1;
    cout<<i<<++i<<i++;
    cout<<j<<j++<<++j;
    */
    return 0;
}