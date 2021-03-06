#include <bits/stdc++.h>
using namespace std;

void printMap(map<int, string> &m){
    cout<<"Size is: "<<m.size()<<endl;
    for(auto p : m){
        cout<<"Key is "<<p.first<<" value is "<<p.second<<endl;
    }
}

void printUnorderedMap(unordered_map<int, string> &m){
    cout<<"Unordered Map: "<<endl;
    cout<<"Size is: "<<m.size()<<endl;
    for(auto p : m){
        cout<<"Key is "<<p.first<<" value is "<<p.second<<endl;
    }
}

int main(){
    

    map<int, string> m;
    m[5] = "Rs";
    m[9] = "wsd";
    m[3] = "az";
    m[2] = "saz";
    m[7] = "faz";

    auto it = m.find(9);

    if(it == m.end()){
        cout<<"No value"<<endl;
    }
    else{
        cout<<(*it).first<<" "<<it->second<<endl;
    }

    m.erase(5);
    printMap(m);
    m.clear();
    printMap(m);

    // map<string, int> l;
    // cout<<"Enter the no of strings: "<<endl;
    // int n;
    // cin>>n;
    // for(int i = 0; i< n; i++){
    //     string s;
    //     cin>>s;
    //     l[s] = l[s] + 1;
    // }
    // for(pair<string, int> st : l){
    //     cout<<st.first<< " "<<st.second<<endl;
    // }

    unordered_map<int, string> l1;
    l1[1] = "abc";
    l1[5] = "cdc";
    l1[3] = "acd";
    l1[6] = "a";
    l1[5] = "cde";

    printUnorderedMap(l1);


    return 0;
}