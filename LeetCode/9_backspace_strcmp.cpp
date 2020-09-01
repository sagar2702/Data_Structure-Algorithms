class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char> s;
        stack<char> t;
        for(string::size_type i=0;i<=S.size();i++)
        {
            if(S[i]=='#')
            {
                if(s.empty()==false)
                {
                    s.pop();
                }
                 
                
            }else
            {
                s.push(S[i]);
            }
        }
        for(string::size_type i=0;i<=T.size();i++)
        {
            if(T[i]=='#')
            {
                if(t.empty()==false)
                {
                   t.pop();    
                }
               
            }else
            {
                t.push(T[i]);
            }
        }

        if(s.size()!=t.size())
        {
            return false;
        }
        while(s.empty()==false)
        {
            if(s.top()==t.top())
            {
                s.pop();
                t.pop();
            }else
            {
                return false;
            }
        }
        return true;
    }
};