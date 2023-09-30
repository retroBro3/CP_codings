#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int k=1; k<=t; k++)
    {
        int n;
        cin>>n;
        vector<string> phoneBook;
        string momNum;

        cout<<"Case "<< k << ":" << endl;

        for(int i=0; i<n; i++)
        {
            string s;
            cin>>s;
            phoneBook.push_back(s);
        }
        cin>>momNum;
        int z = momNum.size();
        
        if(z > 11 || z < 0)
            continue;

        for(int i=0; i<n; i++)
        {
            string pB;
            int cnt = 0;
            pB = phoneBook[i];
            
            if(pB.size() > momNum.size())
                continue;

            for(int j = 0; j < z; j++)
            {
                if(momNum == pB)
                    break;
        
                else
                {
                    if(momNum[j] != pB[j])
                    {
                        cnt++;
                        if(cnt > 1)
                            break;
                    }       
                    
                }
            }
            if(cnt < 2)
                cout << pB << endl;
        }
    }
    return 0;
}