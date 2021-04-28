#include <bits/stdc++.h>
using namespace std;
class Student
{
private:
    int age;

public:
    int rollnumber;
    Student(int r)
    {
        cout << " single args constructor is called " << endl;
        cout << r << endl;
    }
    Student(int a, int r)
    {
        cout << " constructor with two args is called " << endl;
        cout << a << " " << r << " " << endl;
    }
};

int main()
{
    Student s1(10, 1001);
    Student s2(20, 1002);
    Student *s3 = new Student(30, 1003);
    s2 = s1;
   
    //     Student s1(10, 10001);
    //     Student s2(s1);
    //     Student *s4 = new Student(s2);
    //     Student *s5 = new Student(*s4);

    return 0;
}