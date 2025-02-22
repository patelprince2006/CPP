#include <iostream>
using namespace std;
class student;
class faculty
{
    int facultyid;
    char facultyname[25];
public:
    void add_faculty_personal_data()
    {
        cin >> facultyid >> facultyname;
    }
    void add_math_mark(student &x);
    void add_c_mark(student &x);
};
class student
{
    int studentid, mathmark, cmark;
    char studentname[25];
    float per;
public:
    void add_student_personal_data()
    {
        cin >> studentid >> studentname;
    }
    friend void faculty::add_math_mark(student &x);
    friend void faculty::add_c_mark(student &x);
    void cal_per(){
      per=(mathmark+cmark)/2;
    }
    void display_result(){
     cout<<studentid<<mathmark<<cmark<<per;
    }
};


void faculty::add_math_mark(student &x)
{
    cin>>x.mathmark;
}
void faculty::add_c_mark(student &x)
{
    cin>>x.cmark;
}
int main()
{
    student s[5];
    faculty f1 , f2;
    int i;

    for (i=0;i<5;i++)
    {
        s[i].add_student_personal_data();
    }

    f1.add_faculty_personal_data();
    f2.add_faculty_personal_data();
    for (i=0;i<5;i++){
    f1.add_math_mark(s[i]);
    }
    for (i=0;i<5;i++){
        f2.add_c_mark(s[i]);
    }
    for (i=0;i<5;i++){
       s[i].cal_per();
       s[i].display_result();    }
    return 0;
}

