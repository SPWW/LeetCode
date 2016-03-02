class Solution {
public:
    bool isSelfCrossing(vector<int>& x) {
        set<pair<int,int>> path;
        pair<int,int> head = make_pair(0,0);
        path.insert(head);
        for(int i = 0;i<x.size();++i){
            //cout << "+++" << i << endl;
            switch(i%4){
                case 0:
                    for(int j = 0;j<x[i];++j){
                        pair<int,int> pos = make_pair(head.first,head.second+1);
                        //cout << head.first << " " << head.second << endl;
                        if(path.find(pos)!=path.end()){
                            return true;
                        }else{
                            path.insert(pos);
                            head = pos;
                        }
                    }
                    break;
                case 1:
                    for(int j = 0;j<x[i];++j){
                        pair<int,int> pos = make_pair(head.first-1,head.second);
                        //cout << head.first << " " << head.second << endl;
                        if(path.find(pos)!=path.end()){
                            return true;
                        }else{
                            path.insert(pos);
                            head = pos;
                        }
                    }                
                    break;
                    case 2:
                    for(int j = 0;j<x[i];++j){
                        pair<int,int> pos = make_pair(head.first,head.second-1);
                        //cout << head.first << " " << head.second << endl;
                        if(path.find(pos)!=path.end()){
                            return true;
                        }else{
                            path.insert(pos);
                            head = pos;
                        }
                    } 
                    break;
                    case 3:
                    for(int j = 0;j<x[i];++j){
                        pair<int,int> pos = make_pair(head.first+1,head.second);
                        //cout << head.first << " " << head.second << endl;                        
                        if(path.find(pos)!=path.end()){
                            return true;
                        }else{
                            path.insert(pos);
                            head = pos;
                        }
                    }                       
            }
        }
        return  false;
    }
};
