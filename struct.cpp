
#include "struct.h"

void PrintStudentX(Student &s){
    cout << "Nombre: " << s.m_name 
         << ", Edad: " << s.m_age << endl;
}

void PrintStudentX(Student *pStudent){
    PrintStudentX(*pStudent);
}

void PrintStudentY(Student &s){
    PrintStudentX(&s);
}

void PrintStudentY(Student *pStudent){
    cout << "Nombre: " << pStudent->m_name 
         << ", Edad: " << pStudent->m_age << endl;
}

void DemoStructs(){
    Student s1;
    s1.m_name = "Juan";
    s1.m_age  = 20;
    PrintStudentX(s1);
    PrintStudentY(s1);
    PrintStudentY(&s1);
    
    Student *p1 = nullptr;
    p1 = &s1;
    p1->m_name = "Gabriela";
    PrintStudentX(p1);
    PrintStudentX(*p1);

    cout << "Ahora con un objeto dinámico" << endl;
    Student *p2 = nullptr;
    p2 = new Student;
    p2->m_name = "Alfonso";
    p2->m_age  = 30;
    PrintStudentX(p2);
    PrintStudentX(*p2);
    PrintStudentY(p2);
    PrintStudentY(*p2);
    delete p2;

    cout << "Vectores de struct dinamicas" <<endl;
    Student *pVS = nullptr;
    pVS = new Student[3];
    pVS[0].m_name = "Jorge";
    pVS[0].m_age  = 50;
    pVS[1].m_name = "Alex";
    pVS[1].m_age  = 40;

    // Las siguientes 5 formas son exactamente lo mismo !!!!
    // Estudiar con atención y probar en tu computador
    pVS[2].m_name = "Jaime";
    (pVS+2)->m_name = "Jaime";
    (*(pVS+2)).m_name = "Jaime";
    (*(2+pVS)).m_name = "Jaime";
    2[pVS].m_name = "Jaime";

    pVS[2].m_age  = 25;
    for(int i = 0 ; i < 3 ; ++i)
        PrintStudentX(pVS[i]);
    delete [] pVS;
}