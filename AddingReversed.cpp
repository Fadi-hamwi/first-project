#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define TEST(t) int t; cin>>t; while(t--)
#define deb(x) cout<<#x<<"="<<x<<"\n";
#define deb2(x,y) cout<<#x<<"="<<x<<"  "<<#y<<"="<<y<<"\n";
#define S second
#define F first
#define all(z) z.begin(),z.end()

using namespace std;

void solve()
{
    TEST(t)
    {
      string s,t;
      cin >> s >> t;
      int sum[300]={};
      int a[300]={},b[300]={};
      for(int i=0;i<s.length();++i)
      {
         a[i]=s[i]-'0';
      }
      for(int i=0;i<t.length();++i)
      {
         b[i]=t[i]-'0';
      }
      int current=0;
      for(int i=0;i<300;++i)
      {
           sum[i]=a[i]+b[i] + current;
           current=sum[i]/10;
           sum[i] %=10;
      }
      string ans;
      for(int i=0;i<max(s.length()+1,t.length()+1);++i)
            ans +=sum[i]+'0';

        while(ans.back() == '0') ans.pop_back();
        int i=0;
        while(ans[i]=='0') i++;
         for(i;i<ans.length();++i)
            cout << ans[i];

       // cout << ans ;
    cout << "\n";
    }
   return ;

}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
    solve();

    return 0;
}
