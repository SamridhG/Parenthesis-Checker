class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool check (char A,char B)
    {
        if(A=='{' && B=='}')
        {
            return true; 
        }
        else if(A=='(' && B==')')
        {
            return true; 
        }
        else if(A=='[' && B==']')
        {
            return true; 
        }
        else 
        return false;
        
    }
    bool ispar(string x)
    {
        // Your code here
        stack<char>A;
        for(auto s:x)
        {
            if(s=='(' || s=='{' || s=='[')
            {
                A.push(s);
            }
            else
            {
                if(!A.empty() && check(A.top(),s))
                {
                    A.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        return A.size()==0?true:false;
    }
    

};
