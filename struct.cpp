#include <iostream>
#include "struct.h"

using namespace std;
struct Student{
    string m_name;
    int    m_age; // Years
};

void PrintStudent1(Student &s){
    cout << "Nombre: " << s.m_name 
         << ", Edad: " << s.m_age << endl;
}

void PrintStudent2(Student *pStudent){
    cout << "Nombre: " << pStudent->m_name << 
            ", Edad: " << pStudent->m_age << endl;
}

void DemoStructs(){
    Student s1;
    s1.m_name = "Juan";
    s1.m_age  = 20;
    PrintStudent1(s1);

    Student *p1 = nullptr;
    p1 = &s1;
    p1->m_name = "Gabriela";
    PrintStudent2(p1);
}