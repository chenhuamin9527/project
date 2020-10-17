#include <iostream>
using namespace std;
int m_index[10000];
int grade[10000];

int main()
{
    int n, m;
    int base_grade = 100;
    cin >> n >> m;
    int base = 1.5 * m;
    for (int i = 0; i < n; i++)
    {        
        cin >> m_index[i] >> grade[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (grade[i] < grade[j])
            {
                swap(grade[i], grade[j]);
                swap(m_index[i], m_index[j]);
            }
            else if(grade[i]==grade[j])
            {
                if(m_index[j]<m_index[i])
                    swap(m_index[j],m_index[i]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(i < base)
        {
            if(base_grade > grade[i]) base_grade = grade[i];
        }
        else
        {
            if(grade[i]==grade[i-1]) base++;
            else break;
        }
        
    }
    cout << base_grade << " " << base << endl;
    for (int i = 0; i < base; i++)
    {
        cout << m_index[i] << " " << grade[i] << endl;
    }
    return 0;
}