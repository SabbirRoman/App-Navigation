/**
 *    author:  Roman_Emper0r
 *    created: 21.06.2022      
**/
#include<bits/stdc++.h>

using namespace std;

#define ll long long




int main() {
	 #ifndef ONLINE_JUDGE
   freopen("cses_input.txt","r", stdin);
   freopen("cses_output.txt","w",stdout);
#endif 
    
    string s;
    cin>>s;

    std::vector<string> v;
    sort(s.begin(), s.end());

   do
   {
    v.push_back(s);

   }while(next_permutation(s.begin(), s.end()));

   cout<<v.size()<<endl;

   for(int i=0; i<v.size(); i++)cout<<v[i]<<endl;
  
}
