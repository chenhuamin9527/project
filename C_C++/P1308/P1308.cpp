#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
int main()
{
    int cnt=0;
    int pos=-1;
    string sent;
    string word;
    getline(cin,word);
    getline(cin,sent);
    unsigned int leng_word=word.size();
    unsigned int leng_sent=sent.size();
    for (int i=0;i<word.size();i++)         //将所有字母变大写
    word[i]=toupper(word[i]);
    for (int i=0;i<sent.size();i++)
    sent[i]=toupper(sent[i]);
    for (int i=0;i<leng_sent-leng_word;i++)
    {
        int j;
        for (j=0;j<leng_word;j++)
        {
            if (sent[i+j]!=word[j])
                break;
            if (i>0 && sent[i-1]!=' ')
                break;
        }
        if (j==leng_word && (i+j==leng_sent || sent[i+j]==' '))
        {
            cnt++;
            if (cnt==1)
            pos=i;
        }
    }
    if (cnt == 0)
    cout << -1 << endl;
    else 
    cout << cnt << " " << pos << endl;
    return 0;
}