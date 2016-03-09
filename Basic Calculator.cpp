class Solution {
public:
    int calculate(string s) {
        auto kind = [](char& c)->int{
            if(c==' '){
                return 0;
            }else if(c=='('||c==')'){
                return 1;
            }else if(c=='+'||c=='-'){
                return 2;
            }else{
                return 3;
            }
        };
        
        vector<string> segs;
        int l = 0;
        stack<int> last_start;
        for(int i = 1;i<s.size();++i){
            if(kind(s.at(i))!=kind(s.at(i-1)) || (kind(s.at(i-1))==1&&kind(s.at(i))==1)){
                
                if(kind(s.at(i-1))!=0){
                    if(kind(s.at(i-1))==1){
                        if(s.at(i-1)=='('){
                            last_start.push(segs.size());
                        }else{
                            int temp = atoi(segs[last_start.top()].c_str());
                            for(int b = last_start.top()+1;b<segs.size();b+=2){
                                if(segs[b]=="+"){
                                    temp+=atoi(segs[b+1].c_str());
                                }else{
                                   temp-=atoi(segs[b+1].c_str()); 
                                }
                            }
                            
                            segs.erase(segs.begin()+last_start.top(),segs.end());
                            segs.push_back(to_string(temp));
                            last_start.pop();
                        }
                    }else{
                        segs.push_back(s.substr(l,i-l));
                        //cout << s.substr(l,i-l) << endl;
                        //for(auto x:segs){
                        //    cout << x;
                        //}
                        //cout << endl;
                    }
                }
                l=i;
            }
        }

            if(kind(s.at(s.size()-1))!=0){
                    if(s.at(s.size()-1)==')'){
                            int temp = atoi(segs[last_start.top()].c_str());
                            for(int b = last_start.top()+1;b<segs.size();b+=2){
                                if(segs[b]=="+"){
                                    temp+=atoi(segs[b+1].c_str());
                                }else{
                                   temp-=atoi(segs[b+1].c_str()); 
                                }
                            }
                            
                            segs.erase(segs.begin()+last_start.top(),segs.end());
                            segs.push_back(to_string(temp));
                            last_start.pop();
                    
                    }else{
                            segs.push_back(s.substr(l,s.size()-l));

                 }
            }
     
        int ret = atoi(segs[0].c_str());
        for(int i =1;i<segs.size();i+=2){
            if(segs[i]=="+"){
                ret+=atoi(segs[i+1].c_str());
            }else{
               ret-=atoi(segs[i+1].c_str()); 
            }
        }
     
        return ret;
    }
};
