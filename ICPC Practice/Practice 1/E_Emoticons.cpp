#include <bits/stdc++.h>
using namespace std;

int main()
{  
    int t;
    cin>>t;

    for(int k=1; k<=t; k++)
    {
        string Emote = "^_^";
        string setEmo;
        cin>>setEmo;
        int cnt = 0;

        int z = setEmo.size();

        for(int i = 0; i<z; i++)
        {
            string emot_sub;
            emot_sub = setEmo.substr(i, 3);
            if(emot_sub == Emote)
            {
                cnt++;
                i+=3;
            }
            else{
                string emotCheck;
                if(setEmo[i] == '^')
                {
                    for(int p=i+1; p<z; p++)
                    {
                        if()
                    }
                }
            }
        }

    }

    return 0;
}