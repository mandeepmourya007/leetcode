class Solution {
public:
    int calculate(string s) {
       
        
        int n=s.size();
        char op='+';
        stack<int> st;
        for(int i=0;i<n;i++)
        {
            int t=0;

            if(s[i]==' ')
                continue;
            while(s[i]<='9' && s[i]>='0')
            {    t=t*10+(s[i]-'0');
                    i++;
            }
            int x;
            switch(op)
            {
                case '+':
                    st.push(t);
                    break;
                case '-':
                    st.push(-t);
                    break;
                case '*':
                    x=st.top();
                    st.pop();
             
                    st.push(x*t);
                    break;
                case '/':
                    x=st.top();
                    st.pop();
                    st.push(x/t);
                    break;
                    
                    
            }
            op=s[i];
            
        }
        int ans=0;
            // cout<<st.top();
        while(st.size())
        {
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};
