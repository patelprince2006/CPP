#include<iostream>
#include<cstring>
using namespace std;

class person{
   char name[50];
   int age;

  public:
   person(const char Name[],int Age){
     strcpy(name,Name);
     age=Age;
   }

  void display_person_data(){
    cout<<"person name :"<<name<<endl;
    cout<<"person age :"<<age<<endl;
  }   
};

class employe: public person{
   int emp_id;
   
  public:
  employe(const char Name[],int Age,int Emp_id): person(Name,Age){
    emp_id=Emp_id;
  }

  void display_employe_id(){
    cout<<"employe id: "<<emp_id<<endl;
  }
};

class manager: public employe{
  char department_name[25];

 public:
  manager(const char Name[],int Age,int Emp_id,const char Department_name[]): employe(Name,Age,Emp_id){
   strcpy(department_name,Department_name);
  }
  
  void display_manager_data(){
    cout<<"manager department name: "<<department_name<<endl;
  }
};

int main(){
    manager m("prince",45,1,"ram");
  
    m.display_manager_data();
   
    m.display_person_data();
    
    m.display_employe_id();

    return 0;
} 