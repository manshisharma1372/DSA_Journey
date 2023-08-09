 int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        
        stack<int> st;
        
        //step 1
        
        for(int i=0;i<n;i++){
            st.push(i);
        }
        
        
        //step 2
        while(st.size()!=1){
            int a=st.top();
            st.pop();
            int b=st.top();
            st.pop();
            
            if(M[a][b]){
                
                st.push(b);
            }
            
            else{
                st.push(a);
            }
        }
        
        //step 3
        int mightbecel=st.top();
        st.pop();
        
        for(int i=0;i<n;i++){
            if(M[mightbecel][i] != 0){
                return -1;
            }
        }
        
        for(int i=0;i<n;i++){
            if(M[i][mightbecel]==0 && i!=mightbecel){
                
                return -1;
            }
        }
        return mightbecel;
        
        
    }