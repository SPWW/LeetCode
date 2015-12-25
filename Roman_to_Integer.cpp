class Solution {
public:
    int romanToInt(string s) {
    int ci=0;
    int cx=0;
    int cc=0;
    int sum=0;
    char temp = ' ';
    for(auto it= s.begin();it != s.end();it++){
        
        if(*it == 'I'){
          ci++;
          sum++;
          cx = 0;
           cc = 0;
        }else{
           int cs = ci;
            ci = 0;
        
            if(*it=='X'){
                 cc = 0;
                if(temp == 'I'){
                    sum+=10;
                    sum-=(2*cs);
                }else{
                    sum+=10;
                    cx++;
                }
            }
            else{
                 int cxs = cx;
                    cx = 0;
       
                
                if(*it=='C'){
                    if(temp == 'X'){
                        sum+=100;
                        sum-=(2*cxs*10);
                    }else{
                    sum+=100;
                    cc++;
                }
                }else{
                    int ccs = cc;
                        cc = 0;
                
                      if(*it == 'V'){
                        if(temp == 'I'){
                            sum+=5;
                            sum-=(2*cs);
                        }else{
                            sum+=5;
                        }
                      
                      
                      }else if(*it=='L'){
                        
                            if(temp == 'X'){
                                sum+=50;
                                sum-=(2*cxs*10);
                            }else{
                            sum+=50;
                            }
                        
                      }else if(*it=='D'){
                        
                            if(temp == 'C'){
                            sum+=500;
                            sum-=(2*ccs*100);
                        }else{
                        sum+=500;
                            
                            }
                        
                      }else if(*it=='M'){
                        if(temp == 'C'){
                                    sum+=1000;
                                    sum-=(2*ccs*100);
                                }else{
                                sum+=1000;
                            
                            }
                            
                        
                      }
        }
        }
        }
        cout << sum << endl;
        temp = *it; 
    
    }
    
    return sum;
    }
};
