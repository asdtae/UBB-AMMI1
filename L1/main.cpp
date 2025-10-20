#include <iostream>
//#include <fstream>

using namespace std;

int main()
{
    int n,currentNumb;
    bool p=true;
    //ifstream fin("in");
    cin >> n;
    //fin >> n;

    bool fq[1000000]={false};

    //while(!fin.eof())
    for(int i=0; i<n; i++)
    {
        //fin >> currentNumb;
        cin >> currentNumb;
        if(currentNumb >=1 && currentNumb <=1000000) fq[currentNumb] = true;

        //cout << fq[currentNumb] << ' ' << currentNumb << '\n';
    }

    for(int i=1; i<=n; i++)
    {
        if(!fq[i])
        {
            cout << i;
            p = false;
            break;
        }
    }

    if(p) cout<<0;
    return 0;
}