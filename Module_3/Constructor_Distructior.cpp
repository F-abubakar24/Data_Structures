#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;

    Student(){

    }
    
    Student (string name, int std_id, int age)
    {
        this->name = name;
        this->std_id = std_id;
        this->age = age;
    }

    // Constructor

    Student(string name, int id, int ag, string f_name, string m_name)
    {
        this->name = name;
        std_id = id;
        age = ag;
        fathers_name = f_name;
        mothers_name = m_name;
    }

    void print_information()
    {
        cout << name << " " << std_id << " " << age << " " << fathers_name << " " << mothers_name << " " << "\n";
    }
};

int main()
{
    int a[10];
    Student s[10];

    for (int i = 0; i < 10; i++)
    {
        s[i] = Student("A", i, 20);
    }

    for (int i = 0; i < 10; i++)
    {
        s[i].print_information();
    }

        // Student *s = new Student("Abu", 10, 20);
        // s->print_information();
        // (*s).print_information();

        // Student s("Abubakar", 234, 18, "Malek", "Abida");
        // s.print_information();

        // Student s2("Rubaba", 10, 20);
        // s2.print_information();

        // Student s3;

        return 0;
}