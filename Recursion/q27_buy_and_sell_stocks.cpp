#include <bits/stdc++.h>

using namespace std;


void maxProfitFinder(vector<int> &prices,int i,int &minPrice,int &maxProfit){
        
        //base
        if(i==prices.size()){
            return;
        }
        
        //ek case
        if(prices[i]<minPrice){
            minPrice=prices[i];
        }
        
        int todaysprofit=prices[i]-minPrice;
        
        if(todaysprofit>maxProfit){
            maxProfit=todaysprofit;
        }
        
        //RE
        maxProfitFinder(prices,i+1,minPrice,maxProfit);
        
    }
int main()
{
     vector<int> prices{7,1,5,3,6,4};
     int minPrice=INT_MAX;
        int maxProfit=INT_MIN;
        maxProfitFinder(prices,0,minPrice,maxProfit);
        cout<<maxProfit;

    return 0;
}
