class Solution {
public:
    string simplifyPath(string path) {
        deque<string> pstack;
        int last = 0;
        for(int i = 0;i<path.size();++i){
            if(path.at(i)=='/'){
                string temp(path.substr(last,i-last));
                //cout << "^" << temp << "^" << i << "-" << last << endl;
                if(temp != "/." && temp!="/" && temp !=""){
                    if(temp == "/.."){
                        if(!pstack.empty())
                        pstack.pop_back();
                    }else{
                        cout << "*" << endl;
                        pstack.push_back(temp);
                    }
                }
            last = i;
            }
        }
        if(last!=path.size()-1){
                string temp(path.substr(last,path.size()-last));
                cout << temp << endl;
                if(temp != "/." && temp!="/" && temp !=""){
                    if(temp == "/.."){
                        if(!pstack.empty())
                        pstack.pop_back();
                    }else{
                        pstack.push_back(temp);
                    }
                }
        }
        string ret;
        if(pstack.empty())return "/";
        for(auto it = pstack.begin();it!=pstack.end();it++){
            //cout << *it << endl;
            ret+=*it;
        }
        return ret;
    }
};
