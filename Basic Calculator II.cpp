class Solution {
public:
    int kind(char& c){
        if(c == ' '){
            return 0;
        }else if(c == '+' || c == '-' || c == '*' || c =='/'){
            return 1;
        }else{
            return 2;
        }
    }
    int calculate(string s) {
        vector<string> segs;
        string last;
        int l = 0;
        char last_op = ' ';
        for(int i = 1;i<s.size();++i){
            if(kind(s.at(i))!=kind(s.at(i-1))){
                if(s.at(i-1)==' '){
                    l = i;
                    continue;
                }else{
                    string temp = s.substr(l,i-l);
                    if(last_op == '*'){
                        if(temp != "+" &&temp != "-" && temp!="*" &&temp != "/"){
                            int a = atoi(segs.at(segs.size()-2).c_str());
                            int b = atoi(temp.c_str());
                            int r = a*b;
                            segs[segs.size()-2]=to_string(r);
                            //cout << r << endl;
                            segs.erase(segs.end()-1);
                            l = i;
                            last_op = ' ';
                            continue;
                        }
                        
                    }else if(last_op == '/'){
                        if(temp != "+" &&temp != "-" && temp!="*" &&temp != "/"){
                            int a = atoi(segs.at(segs.size()-2).c_str());
                            int b = atoi(temp.c_str());
                            int r = a/b;
                            segs[segs.size()-2]=to_string(r);
                            //cout << r << endl;
                            segs.erase(segs.end()-1);
                            l = i;
                            last_op = ' ';
                            continue;
                        }
                        
                    }

                    segs.push_back(temp);
                    if(temp == "+" ||temp == "-" || temp=="*" ||temp == "/"){
                        last_op = *temp.c_str();
                    }
                    l=i;
                }
            }
        }
        
        if(s.at(s.size()-1)!=' '){

            string temp = s.substr(l,s.size()-l);
            //cout << temp << endl;
            if(last_op == '*'){
                if(temp != "+" &&temp != "-" && temp!="*" &&temp != "/"){
                    int a = atoi(segs.at(segs.size()-2).c_str());
                    int b = atoi(temp.c_str());
                    int r = a*b;
                    segs[segs.size()-2]=to_string(r);
                    //cout << r << endl;
                    segs.erase(segs.end()-1);
                    last_op = ' ';
                }
                
            }else if(last_op == '/'){
                if(temp != "+" &&temp != "-" && temp!="*" &&temp != "/"){
                    int a = atoi(segs.at(segs.size()-2).c_str());
                    int b = atoi(temp.c_str());
                    int r = a/b;
                    segs[segs.size()-2]=to_string(r);
                    //cout << r << endl;
                    segs.erase(segs.end()-1);
                    last_op = ' ';
                }
                
            }else{
                segs.push_back(temp);
            }
            //segs.push_back(s.substr(l,s.size()-l));
        }



        int ans = atoi(segs.at(0).c_str());
        for(int i = 1;i<segs.size();i+=2){
            if(segs.at(i)=="+"){
                ans+=atoi(segs.at(i+1).c_str());
            }else if(segs.at(i)=="-"){
                ans-=atoi(segs.at(i+1).c_str());
            }
        }


        return ans;
    }
};
