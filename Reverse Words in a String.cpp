class Solution {
	public:
		void reverseWords(string &s) {
			int ss = s.size();
			int e = s.size();
			int state = 0;
			for(int i = s.size()-1;i>=0;--i){
				//cout << i << " === " << e << endl;
				if(s.at(i)==' '){
					if(i+1 < ss && s.at(i+1)!=' '){
						state = 1;
						s+= s.substr(i+1,e-i-1)+" ";
					}
					
					if(i-1 >= 0 && s.at(i-1)!= ' '){
						e = i;
					}
					
					if(i==0){
						if(s.at(i)==' ')s.erase(s.end()-1);
						break;
					}
					
				}else if(i==0){
					if(e == ss){
						state = 1;
						s+= s.substr(0,e);
					}else{
						state = 1;
						s+=s.substr(0,e);
					}

				}
			}
			if(s.size()>ss)
			s = s.substr(ss,s.size()-ss);
			if(state == 0)s="";
			return;
		}
	};
