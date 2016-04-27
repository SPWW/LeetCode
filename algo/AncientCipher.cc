#include <iostream>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    
    string a,b;
    cin >> a;
    cin >> b;

    if(a.size()!=b.size()){
        cout << "false" << endl;
        return 0;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    cout << "---" << endl;
    cout << a << endl;
    cout << b << endl;

    auto check = [](string a,string b)->bool{
        map<char,char> m;

        for(int i =0;i<a.size();++i){
            if(m.find(a.at(i))==m.end()){
            
                m[a.at(i)]=b.at(i);
                
            }else{
            
                if(b.at(i)!=m[a.at(i)]){
                
                    cout << "false" << endl;
                    return false;
                }
            }
        }
        cout << "true" << endl;
    return true;
    };


    check(a,b);
    check(b,a);
    return 0;
}
