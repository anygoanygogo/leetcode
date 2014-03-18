class Solution {
public:
    int romanToInt(string s) {
		int len = s.length();
		int pos = 0;
		int res = 0;
		while(pos < len-1){
			char num = s[pos];
			int val = getValue(s[pos]);
			int tmp = getValue(s[pos+1]);
			switch(num){
			    case 'I':
			    case 'X':
			    case 'C':
                                if(tmp > val){
			            res = res + tmp - val;
				    pos = pos + 2;
				}else{
				    res = res + val;
				    pos++;
				}
				break;
			    case 'V':
			    case 'L':
			    case 'D':
			    case 'M':
			        res = res + val;
			        pos++;
			        break;
			    default:
				cout << "error\n";
				return -1;
			}
		}
		if(pos < len)
			res = res + getValue(s[pos]);
		return res;
    }
	int getValue(char c){
		int res;
		if( c == 'I')
			res = 1;
		if( c == 'V')
			res = 5;
		if( c == 'X')
			res = 10;
		if( c == 'L')
			res = 50;
		if( c == 'C')
			res = 100;
		if( c == 'D')
			res = 500;
		if( c == 'M')
			res = 1000;
		return res;
	}
};
