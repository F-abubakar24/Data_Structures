#include<bits/stdc++.h>
using namespace std;

class Student{
private:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;
public:

    void print_information()
    {
        cout << name << " " << std_id << " " << age << " " << fathers_name << " " << mothers_name << "\n";
    }
    void setInformation(string s, int id, int ag)
    {
        name = s;
        std_id = id;
        age = ag;
    }
};

class Rectangle{
public:
    int width, height;

    Student sul;


    int calculate_area()
    {
        return width * height;
    }
    // perimeter
    int calculate_perimeter()
    {
        return 2 * (height + width);
    }
};

class Person{
public:
    string name;
    Person *father, *mother;

    Person()
    {
        father = NULL;
        mother = NULL;
    }

    Person(string name, string f_name, string m_name)
    {
        this->name = name;
        father = new Person;
        father->name = f_name;
        mother = new Person;
        mother->name = m_name;
    }

    void print_info()
    {
        cout << "Name = " << name << "\n";
        cout << "Fathers name = " << father->father << "\n";
        cout << "Mothers name = " << mother->mother << "\n";
    }
    ~Person()
    {
        cout << "Called\n";
        if(father != NULL)
            delete father;
        if(mother != NULL)
            delete mother;
    }
};

class User{
protected:
    string name;
    int age;
};

class Admin: User{
private:
    string designation;

public:
    void Set(string s, int ag, string dg)
    {
        name = s;
        age = ag;
        designation = dg;
    }
    void print(){
        cout << name << "\n";
        cout << age << "\n";
        cout << designation << "\n";
    }
};

int main()
{
    Person p("A", "B", "C");
    p.print_info();


    // Admin ad;
    // ad.Set("Abu", 20, "Dg");
    // ad.print();

    // Student s;
    // // s.age = 20;
    // s.setInformation("Abu Bakar", 10, 20);
    // s.print_information();

    // Person p;
    // p.father = new Person;
    // p.mother = new Person;
    // p.name = "A";
    // p.father->name = "B";
    // p.mother->name = "C";
    // p.print_info();

    // Rectangle r1, r2;

    // r1.height = 4;
    // r1.width = 8;
    // cout << r1.calculate_area() << "\n";
    // cout << r1.calculate_perimeter() << "\n";
    
    // r2.height = 3;
    // r2.width = 9;
    // cout << r2.calculate_area() << "\n";
    // cout << r2.calculate_perimeter() << "\n";

    // r1.sul.name = "hello";
    // r1.sul.print_information();

    // Student s;
    // s.name = "Abubakar";
    // s.std_id = 1705056;
    // s.age = 24;
    // s.fathers_name = "Malek";
    // s.mothers_name = "Abida sultana";
    // s.print_information();


    // Student s2;
    // s2.name = "Obaidulla";
    // s2.std_id = 454566;
    // s2.age = 24;
    // s2.fathers_name = "Sohidul";
    // s2.mothers_name = "Salma sultana";
    // s2.print_information();

    return 0;
}