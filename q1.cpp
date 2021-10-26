#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define f0(n) for(int i=0;i<n;i++)
#define f1(n) for(int i=1;i<=n;i++)
#define mii map<int,int>
#define mci map<char,int>
#define V vector<int>
#define vp vector<pair<int,int>>
#define pb push_back
#define pp pair<int,int>
#define ff first
#define ss second
#define S set<int>
#define show2(a, b) cout<<a<<' '<<b<<endl;
#define show3(a, b, c) cout<<a<<' '<<b<<' '<<c<<endl;
#define mod 1000000007
 string missingPanagram(string str){
    
     //Your code here
     int a[26];
     string temp="";
     for(int i=0;i<26;i++) a[i]=0;
     for(int j=0;j<str.length();j++)
     {
      if(str[j] >= 'a' && str[j] <= 'z') a[str[j]-'a']++;
      else a[str[j]-'A']++;
     }
     for(int i=0;i<26;i++)
     {
         if(a[i]==0) temp+=i+'a';
     }
     sort(temp.begin(),temp.end());
     if(temp!="") return temp;
     else return "-1";
 }
int posteval()
{
      string a="231*+9-";
       int x,y,res=0;
        stack<int> s;
        for(int i=0;i<a.length();i++)
        {
            if(a[i]=='*')
            {
                x=s.top();
                s.pop();
                y=s.top();
                s.pop();
                res=x*y;
                cout<<res<<endl;
                s.push(res);
            }
            else if(a[i]=='/')
            {
                x=s.top();
                s.pop();
                y=s.top();
                s.pop();
                res=x/y;
                 cout<<res<<endl;
                s.push(res);
            }
            else if(a[i]=='+')
            {
                x=s.top();
                s.pop();
                y=s.top();
                s.pop();
                res=x+y;
                 cout<<res<<endl;
                s.push(res);
            }
            else if(a[i]=='-')
            {
                x=s.top();
                s.pop();
                y=s.top();
                s.pop();
                res=y-x;
                 cout<<res<<endl;
                s.push(res);
            }
            else
            {
                s.push(a[i]-'0');
            }   
        }
       cout<<s.top();
}
int32_t main()
{ 
    // posteval();
    // cout<< missingPanagram("abcdefghijklmnopqrstuvwxyz");
    string a="abbcdff";
    string b="ddcfeyy",t="",t1="";
    int c[26];
    f0(26) c[i]=0;
    f0(a.length())
    {
        c[a[i]-'a']++;
    }
      f0(26)
      {
        if(c[i]!=0) t+=c[i]+'0';
      }
       f0(26) c[i]=0;
    f0(a.length())
    {
        c[b[i]-'a']++;
    }
      f0(26)
      {
        if(c[i]!=0) t1+=c[i]+'0';
      }
      sort(t.begin(),t.end());
      sort(t1.begin(),t1.end());
      cout<<t<<" "<<t1<<endl;
      if(t==t1) cout<<"yes";
      else cout<<"no";

    //   stack<int> st,s1;
    //   string s="312";
    //   st.push(s[0]);
    //   for(int i=1;i<s.length();i++)
    //   {
    //   if(s[i]>=st.top()) st.push(s[i]-'0');
    //   else{
    //       while(s[i]<st.top() && !st.empty())
    //       {
    //         s1.push(st.top());
    //         st.pop();
    //       }
    //       st.push(s[i]);
    //       while(!s1.empty())
    //       {
    //           st.push(s1.top());
    //           s1.pop();
    //       }
    //   }
    //   }
    //    while(!st.empty())
    //       {  int x=st.top();
    //           cout<<x<<" ";
    //           st.pop();
    //       }
      


}
// int prec(char c)
// {
//     if(c == '^')
//         return 3;
//     else if(c == '*' || c == '/')
//         return 2;
//     else if(c == '+' || c == '-')
//         return 1;
//     else
//         return -1;
// }
//  string infixToPostfix(string s)
//     {
//         // Your code here
//        stack<char> st;
//     st.push('N');
    
//     int l = s.length();
    
//     string ns;
    
//     for(int i = 0; i < l; i++)
//     {
//         // If the scanned character is an operand, 
//         // add it to output string.
//         if((s[i] >= 'a' && s[i] <= 'z')||
//                 (s[i] >= 'A' && s[i] <= 'Z'))
//             ns+=s[i];
//         // If the scanned character is an ‘(‘,
//         // push it to the stack.
//         else if(s[i] == '(')
        
//         st.push('(');
        
//         // If the scanned character is an ‘)’, 
//         // pop and to output string from the stack
//         // until an ‘(‘ is encountered.
//         else if(s[i] == ')')
//         {
//             while(st.top() != 'N' && st.top() != '(')
//             {
//                 char c = st.top();
//                 st.pop();
                
//                 ns += c;
//             }
//             if(st.top() == '(')
//             {
//                 char c = st.top();
//                 st.pop();
//             }
//         }
        
//         // If an operator is scanned
//         else{
//             while(st.top() != 'N' && prec(s[i]) <= prec(st.top()))
//             {
//                 char c = st.top();
//                 st.pop();
//                 ns += c;
//             }
            
//             st.push(s[i]);
//         }
//     }
    
//     // Pop all the remaining elements from the stack
//     while(st.top() != 'N')
//     {
//         char c = st.top();
//         st.pop();
//         ns += c;
//     }
//     cout<<ns;
//     }
    
// int32_t main()
// {
//      string exp = "a+b*(c^d-e)^(f+g*h)-i";
    
//     infixToPostfix(exp);
    
//     return 0;
// }