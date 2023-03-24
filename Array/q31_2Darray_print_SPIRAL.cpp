  #include<bits/stdc++.h>
  using namespace std;
  
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
         vector<int> ans;
        
        int m=matrix.size();
        int n=matrix[0].size();
        int total_elements=m*n;
        
        
        int startingrow=0;
        int endingcol=n-1;
        int endingrow=m-1;
        int startingcol=0;
        
        int count=0;
        while(count< total_elements){
            
            //printing first row
            
            for(int i=startingcol;i<=endingcol && count<total_elements;i++){
                ans.push_back(matrix[startingrow][i]);
                count++;
            }
            startingrow++;
            
            //printing last col
            
            for(int i=startingrow;i<=endingrow && count<total_elements;i++){
                ans.push_back(matrix[i][endingcol]);
                count++;
            }
            endingcol--;
            
            //printing ending row
            
            for(int i=endingcol;i>=startingcol && count<total_elements;i--){
                ans.push_back(matrix[endingrow][i]);
                count++;
            }
            endingrow--;
            
            //printing starting col
            
            for(int i=endingrow;i>=startingrow && count<total_elements;i--){
                ans.push_back(matrix[i][startingcol]);
                count++;
            }
            startingcol++;
            
        }
        return ans;
    }
        
        int main(){
            
          vector<vector<int>> v{
              
              {1,2,3,4},
              {5,6,7,8},
              {9,10,11,12},
              {13,14,15,16},
              {17,18,19,20}
          };
          
          vector<int> res;
         res=spiralOrder(v);
            for(auto it:res){
                cout<<it<<" ";
            }
            return 0;
            
        }