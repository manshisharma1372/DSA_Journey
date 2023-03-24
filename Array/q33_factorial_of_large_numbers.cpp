  #include<bits/stdc++.h>
  using namespace std;
  
      vector<int> largeFactorial(int n){
          
          vector<int> ans;
          int carry=0;
          ans.push_back(1);
          
          for(int i=2;i<=n;i++){
              
              for(int j=0;j<ans.size();j++){
                  int x=ans[j]*i+carry;
                  ans[j]=x%10;
                  carry=x/10;
                  
              }
              
              while(carry){
                  
                  ans.push_back(carry%10);
                  carry/=10;
                  
              }
          }
          
          reverse(ans.begin(),ans.end());
          return ans;
      }
        
        int main(){
         
            int n=50;
            vector<int> res;
            
            res=largeFactorial(n);
            for(auto it:res){
                cout<<it;
            }
            return 0;
            
        }