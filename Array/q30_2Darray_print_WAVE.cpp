  #include<bits/stdc++.h>
  using namespace std;
  
    void printwave(vector<vector<int>>v){
        
        int m=v.size();
        int n=v[0].size();
        
        for(int startcol=0;startcol<n;startcol++){
            
            //if even print Top to bottom
            if(startcol%2==0){
                for(int i=0;i<m;i++){
                    cout<<v[i][startcol]<<" ";
                }
            }
            
            else{
                //odd print bottom to Top
                
                for(int i=m-1;i>=0;i--){
                    cout<<v[i][startcol]<<" ";
                }
            }
        }
    }
        
        int main(){
            
          vector<vector<int>> v{
              
              {1,2,3,4},
              {5,6,7,8},
              {9,10,11,12},
              {13,14,15,16},
              {17,18,19,20}
          };
          
          printwave(v);
            
            return 0;
            
        }