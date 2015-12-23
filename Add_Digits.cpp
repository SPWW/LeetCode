class Solution {
    public:
    int addDigits(int num) {
                        
    int temp = num;
    for(;temp/10 >= 0;){
                                    
        int count = 0;
        for(;temp/10 >= 0;){
            if(temp/10 > 0){
                count += temp%10;
                temp = temp/10;
                cout << "count:" << count << endl;
                
            }
            else {
                count += temp%10;
                temp = temp/10;
                cout << "count:" << count << endl;
                break;
            }
        
        }
        temp = count;
        
        if(temp/10 == 0){
            break;
        }
    
    }
    
    return temp;
   
    }
};
