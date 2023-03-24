  #include<bits/stdc++.h>
  using namespace std;
  
  vector <int> commonElements (int a[], int b[], int c[], int n1, int n2, int n3)
        {
            //code here.
            vector<int> v;
            set<int> s;
            
            int i=0;
            int j=0;
            int k=0;
            while(i<n1 && j<n2 && k<n3){
                
                if(a[i]==b[j] && b[j]==c[k]){
                    s.insert(a[i]);
                    i++;
                    j++;
                    k++;
                }
                
                else if(a[i]<b[j]){
                    i++;
                }
                else if(b[j]<c[k]){
                    j++;
                }
                
                else{
                    k++;
                }
                
            }
            
            for(auto it:s){
                v.push_back(it);
            }
            
            return v;
        }
        
        int main(){
            
            int n1 = 6; 
            int a[] = {1, 5, 10, 20, 40, 80};
            int n2 = 5; 
            int b[] = {6, 7, 20, 80, 100};
            int n3 = 8; 
            int c[] = {3, 4, 15, 20, 30, 70, 80, 120};
            
            vector<int> res;
            res=commonElements(a,b,c,n1,n2,n3);
            for(auto it:res){
                cout<<it<<" ";
            }
            
            return 0;
            
        }