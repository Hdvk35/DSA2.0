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

}