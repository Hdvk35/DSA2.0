#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    //creation
    unordered_map<string, int>m;

    pair<string,int> p = make_pair("harshit",3);
    m.insert(p);

    pair<string,int>p1("virat",2);
    m.insert(p1);

    //thrid tareekla

    m["rohit"]=4;
    m["rohit"]=2;

    // searching 

    cout<<m["harshit"]<<endl;
    cout<<m.at("virat")<<endl;


    cout<<m.size()<<endl;

    // to check presecne

    cout<<m.count("bro")<<endl;

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl; 
    }

    unordered_map<string,int> :: iterator it = m.begin();
    while(it != m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }

}