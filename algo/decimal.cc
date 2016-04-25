#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int a,b,c;
    cin >> a >> b >> c;
    
    for(int i = 0;i<c;++i){
        int wight = pow(10,i+1);
        a *= wight;
        int tb = b;
        b *= wight;
        cout << a/tb << "---" << b;
        a %= tb; 
    
        cout << "  " << a << endl;
    }
    return 0;

}
