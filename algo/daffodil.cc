#include <iostream>
#include <math.h>

using namespace std;

int main(int argc,char* argv[]){
    int num;

    for(int i = 100;i<=999;++i){
        int a = i/100;
        int b = (i%100)/10;
        int c = i%10;
        
        int sum = pow(a,3)+pow(b,3)+pow(c,3);
        if(sum == i){
            cout << "find: " << sum << endl;
        }
    }

    return 0;
}
