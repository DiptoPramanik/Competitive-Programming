#include<bits/stdc++.h>
using namespace std;
int main()
{
    ///map Declaration
    map<int,int>cnt ;///1st int key/index datatype ; 2nd int value datatype


    map<string,int>id;
    id["Shahriar"] = 1;
    id["Momo"] = 3;
    id["Sharif"] = 4;
    cout<<id["Sharif"]<<endl;
    ///output : 4

    map<string,string>gender;
    gender["Shahriar"] = "male";
    gender["Momo"] = "female";
    cout<<gender["Prety"]<<endl; ///


    map<string,int>mp;
    mp["Shahriar"] = 1;
    mp["Momo"] = 3;
    cout<<mp["Prety"]<<endl;///0

    vector<long long>v={1,10120202020929929,2828393399390,10120202020929929};
    map<long long int,int>m;
    for(int i=0;i<v.size();i++)
    {
        m[v[i]]++;
    }
    cout<<m[10120202020929929]<<endl;///2
    /*
    for(auto u:v0
    {
        m[u]++;
    }*/
    ///map sorted depends on key/index
    /// insert/Access = O(log2(n))
    for(auto u:m)
    {
        cout<<u.first<<' '<<u.second<<endl;
    }

    vector<int>vec={2,2,1,1,3};
    map<int,bool>visited;
    for(auto u:vec) visited[u] = 1; /// O(n*log2(n))
    for(auto u:visited) cout<<u.first<<' '<<u.second<<endl;
    ///output :
////             1 1
////             2 1
////             3 1

    ///user input
    map<string,int>x;
    int n; cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        int d;
        cin>>s>>d;
        x[s] = d;///maping
    }


    vector<map<string,int>>vect;
    map<string,int>m1;
    m1["asd"] = 1;
    vect.push_back(m1);
    cout<<vect[0]["asd"]<<endl;/// 1

    map<int,int>c;
    c[1] = 1;
    c[2] = 2;
    c[3] = 1;
    c[2] = 2
    ///size of map
    cout<<c.size()<<endl; /// 3
    return 0;
}
