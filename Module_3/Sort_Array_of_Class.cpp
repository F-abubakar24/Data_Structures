#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int std_id;
    int age;
    string father_name;
    string mother_name;

    Student()
    {
        
    }

    Student(string name, int id, int age, string f_name, string m_name)
    {
        this->name = name;
        std_id = id;
        this->age = age;
        father_name = f_name;
        mother_name = m_name;
    }

    Student(string name, int id, int age)
    {
        this->name = name;
        std_id = id;
        this->age = age;
    }

    void print_information()
    {
        cout << name << " " << std_id << " " << age << " " << father_name << " " << mother_name << "\n";
    }

    bool operator < (Student s)
    {
        return std_id < s.std_id;
    }

};

// bool comp(Student a, Student b)
// {
//     // when a is less then b
//     return a.std_id < b.std_id;
// }

int main()
{
    vector<Student> a;

    for (int i = 0; i < 10; i++)
    {
        a.push_back(Student("Abu Bakar", 20-i, 20));
    }
    for (int i = 0; i < 10; i++)
    {
        a[i].print_information();
    }
    
    cout << "After sorting\n";

    sort(a.begin(), a.end());
    for (int i = 0; i<10; i++)
    {
        a[i].print_information();
    }

        return 0;
}