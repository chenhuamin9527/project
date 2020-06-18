#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    int number1;
    int age;
    char name[10] = {'\0'};
    Person(){}
    Person(int i, int j, const char*p)
    {
        number1 = i;
        age = j;
        int k;
        for (k = 0; p[k] != '\0'; k++)
        {
            name[k] = p[k];
        }
        name[++k] = '\0';
    }
    void disp()
    {
        cout << "number1 = " << number1 << endl;
        cout << "age = " << age << endl;
        cout << "name = "; 
        for (int l = 0; name[l] != '\0'; l++)
        {
            cout << name[l];
        }
        cout << endl;
    }
};

class Student : public Person
{
public:
    string lesson;
    double grade;
    Student();
    Student(int i, int j, const char *p, string les, double grade) : Person(i, j, p)
    {
        lesson = les;
        this->grade = grade;
    }
    void disp()
    {
        cout << "number1 = " << number1 << endl;
        cout << "age = " << age << endl;
        cout << "name = "; 
        for (int l = 0; name[l] != '\0'; l++)
        {
            cout << name[l];
        }
        cout << endl;
        cout << "lesson = " << lesson << endl;
        cout << "grade = " << grade << endl;
    }
};

class Teacher : public Person
{
public:
    char job[10] = {'\0'};
    char workplace[10] = {'\0'};
    Teacher();
    Teacher(int i, int j, const char*p, const char * jo, const char * work) : Person(i, j, p)
    {
        int a,b;
        for (a = 0; jo[a] !='\0'; a++)
        {
            job[a] = jo[a];
        }
        job[++a] = '\0';

        for (b = 0; work[b] !='\0'; b++)
        {
            workplace[b] = work[b];
        }
        workplace[++b] = '\0';

    }
    void disp()
    {
        cout << "number1 = " << number1 << endl;
        cout << "age = " << age << endl;
        cout << "name = "; 
        for (int l = 0; name[l] != '\0'; l++)
        {
            cout << name[l];
        }
        cout << endl;
        for (int l = 0; job[l] != '\0'; l++)
        {
            cout << job[l];
        }
        cout << endl;
        for (int l = 0; workplace[l] != '\0'; l++)
        {
            cout << workplace[l];
        }
        cout << endl;
    }
};
int main()
{
    Person a(1, 18, "aa");
    a.disp();
    Student b(2, 14, "bb", "math", 90);
    b.disp();
    Teacher c(3, 22, "cc", "english", "road");
    c.disp();
    return 0;
}