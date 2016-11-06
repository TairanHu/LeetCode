class Solution {
public:
    string convert(string s, int numRows) {
        
        string tem;
        int length = s.size();
        int num ;
        //int remainder ;
        
        if(numRows == 1)
        {
            return s;
        }
        
        if(numRows > 1)
        {
            num = length/(2*numRows - 2);
            //remainder = length%(2*numRows - 2);
        }
        
        for(int j = 0; j < length; j = j+2*(numRows-1) )
        {
            tem += s[j] ;
        }
        
        for(int i = 1; i < numRows-1; i++)
        {
            for(int j = 0; j < num; j++)//3
            {
                //cout << s[i+j*(2*num-2)] << s[i+(j+1)*(2*num-2)];
                tem += s[i+j*(2*numRows-2)];
                tem += s[-i+(j+1)*(2*numRows-2)];
            }
            int m = i+num*(2*numRows-2);
            int n = -i+(num+1)*(2*numRows-2);
            
            if(m < length)
            {
                tem += s[m];
                if(n < length)
                {
                    tem += s[n];
                }
            }
            
            
            
        }
        
        for(int j = numRows-1; j < length; j = j+2*(numRows-1) )
        {
            //cout << s[j] ;
            tem += s[j] ;
        }
        return tem;
    }
};