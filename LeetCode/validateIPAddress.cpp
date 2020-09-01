class Solution {
public:
    string validIPAddress(string IP) {
    if(IP.length()==0) return "Neither";
      int dot =0;
      int col=0;
       for(char const &c:IP)
       {
           if(c=='.')
           {
               dot++;
           }
           if(c==':')
           {
               col++;
           }
       }
        if(dot==3)
        {
            if(checkIP4(IP)) return "IPv4";
        }
        if(col==7)
        {
            if(checkIP6(IP)) return "IPv6";
        }
        return "Neither";
    }
    
    bool checkIP4(string IP)
    {
        int j=0;
        int number=0;
        vector<char> x;
        for(string::size_type i=0;i<IP.size();i++)
        {
            if(j==0 && IP[i]=='.') return false;
            if(IP[i]!='.' &&(IP[i]<'0' || IP[i]>'9')) return false;
            if(i!=0 && j==1 && IP[i-1]=='0'&& (IP[i]>='0'&&IP[i]<='9')) return false;
            if(IP[i]>='0' && IP[i]<='9')
            {
                 x.push_back(IP[i]);
                if(x.size()>3) return false;
                number=number*10+(x[j]-'0');
                
            }
            j++;
            if(IP[i]=='.')
            {
                if(x.size()==0||x.size()>3) return false;
                if(number<0||number>255) return false;
                j=0;
                number=0;
                x.clear();
           }
        }
        if(IP[IP.size()-1]=='.') return false;
        if(number>255||number<0) return false;
        return true;
    }
    
    bool checkIP6( string IP)
    {
         int j=0;
        vector<char> x;
        for(string::size_type i=0;i<IP.size();i++)
        {
            if(j==0 && IP[i]==':') return false;
            if(IP[i]!=':' && (IP[i]<'0'||IP[i]>'9')&&(IP[i]<'a'||IP[i]>'f')&&(IP[i]<'A'||IP[i]>'F'))
                return false;
            if(IP[i]==':')
            {
                if(x.size()==0||x.size()>4) return false;
                j=0;
                x.clear();
            }else
            {
                x.push_back(IP[i]);
                if(x.size()>4) return false;
            }
            j++;
        }
         if(IP[IP.size()-1]==':') return false;
        if(x.size()>4||x.size()<0) return false;
        return true;
    }
};