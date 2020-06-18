#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    Student(float cna,float math,float eng):cna(cna), math(math), eng(eng)
    {
        count++;
        t_cna += cna;
        t_math += math;
        t_eng += eng;
        cout << "student is created. " << endl;
        if(cna >= m_cna)
            m_cna = cna;
        if(math >= m_math)
            m_math = math;
        if(eng >= m_eng)
            m_eng = eng;
    }
    static float get_max_cna();
    static float get_max_math();
    static float get_max_eng();
    static float aver_cna();
    static float aver_math();
    static float aver_eng();
private:
    float cna, math, eng;
    static float m_cna, m_math, m_eng;
    static float t_cna, t_math, t_eng;
    static int count;
};
float Student::m_cna = 0;
float Student::m_math = 0;
float Student::m_eng = 0;

float Student::t_cna = 0;
float Student::t_math = 0;
float Student::t_eng = 0;

int Student::count = 0;

float Student::get_max_cna()
{
    return m_cna;
}

float Student::get_max_math()
{
    return m_math;
}

float Student::get_max_eng()
{
    return m_eng;
}

float Student::aver_cna()
{
    return t_cna/count;
}

float Student::aver_math()
{
    return t_math/count;
}

float Student::aver_eng()
{
    return t_eng/count;
}

int main()
{
    Student a(90,80,90);
    Student b(70,60,70);
    Student c(65,75,80);
    cout << Student::get_max_cna() << endl;
    cout << Student::get_max_eng() << endl;
    cout << Student::get_max_math() << endl;
    cout << Student::aver_cna() << endl;
    cout << Student::aver_eng() << endl;
    cout << Student::aver_math() << endl;
    return 0;
}