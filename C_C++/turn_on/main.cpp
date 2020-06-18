#include <iostream>
using namespace std;
int main()
{
  	long long lef=0,rig=0;
  	long long cnt=0;
      cin >> lef >> rig;
  	for (long long i=0;i<=100000000;i++)
    {
      if (i*i>=lef&&i*i<rig)
      {
        cnt++;
      }
    }
    cout << cnt <<endl;
	return 0;
}