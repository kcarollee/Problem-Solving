#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> player;
    player.insert(make_pair("soccer", 11));
    player.insert(make_pair("baseball", 9));
    player.insert(make_pair("volleyball", 6));
    player["football"] = 11;
    player["basketball"] = 5;
    player["handball"] = 7;

    cout<<"before: "<<endl;
    map<string, int>::iterator mt;
    for (mt = player.begin(); mt != player.end(); mt++){
        cout<<"Key: "<<mt -> first<<","<<"Value: "<<mt -> second<<endl;
    }
    cout<<endl;
    player.erase("football");
    mt = player.find("volleyball");
    player.erase(mt);
    cout<<"after: "<<endl;
    for (auto it : player){
        cout<<"key: "<<it.first<<","<<"value: "<<it.second<<endl;
    }
}
