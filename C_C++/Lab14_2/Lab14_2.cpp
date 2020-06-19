#include <bits/stdc++.h>
using namespace std;


int main()
{
    vector <string> v(10);
    v[1] = "sdfmoew", v[2] = "sdfwef", v[3] = "iogfrew", v[4] = "fdsjiw", v[5] = "omnwng";
    v[6] = "oiujd", v[7] = "1sdxcv", v[8] = "qignna", v[9] = "iongdf", v[0] = "qnuixz";
    sort(v.begin(), v.end());
    for (int i = 0; i < 10; i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}