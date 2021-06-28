class Solution {
public:
    int calculate(string s) {
       
        
//         int n=s.size();
//         char op='+';
//         stack<int> st;
//         for(int i=0;i<n;i++)
//         {
//             int t=0;

//             if(s[i]==' ')
//                 continue;
//             while(s[i]<='9' && s[i]>='0')
//             {    t=t*10+(s[i]-'0');
//                     i++;
//             }
//             int x;
//             switch(op)
//             {
//                 case '+':
//                     st.push(t);
//                     break;
//                 case '-':
//                     st.push(-t);
//                     break;
//                 case '*':
//                     x=st.top();
//                     st.pop();
             
//                     st.push(x*t);
//                     break;
//                 case '/':
//                     x=st.top();
//                     st.pop();
//                     st.push(x/t);
//                     break;
                    
                    
//             }
//             op=s[i];
            
//         }
//         int ans=0;
//         while(st.size())
//         {
//             ans+=st.top();
//             st.pop();
//         }
        // s+='+';
            
        int  n=s.size();
        long num=0,ans=0,as=0,op='+';
        for(int i=0;i<n;i++)
        {
            num=0;
            
            while(s[i]==' ')
                i++;
            while(s[i]>='0' && s[i]<='9')
            {
                num=num*10+s[i]-'0';
            i++;
            }
            while(s[i]==' ')
                i++;   
            switch(op)
            {
                    
                    
                case '+':
                   ans+=as;
                   as=num; 
                    break;
                case '-':
                    ans+=as;
                    as=-num;
                    break;
                case '*':
                    as=as*num;
                    break;
                case '/':
                    as=as/num;
                    break;
                    
            }
         
            op=s[i];
        }
        
        return ans+as;
    }
};
