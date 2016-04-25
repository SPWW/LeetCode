#include <iostream>

using namespace std;

int main(){
    int a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;

    for(int i = 10;i<=100;++i){
        if(i%3 == a && i%5 == b && i%7 ==c){
            cout << i << endl;
            return 0;
        }
    }
    cout << "No answer." << endl;
    return 0;


}
