#include <bits/stdc++.h>

using namespace std;



int main()
{
    string str;
   // cin>>str;
    //cout<<str;
 
 
 
    getline(cin,str);
    cout<<str<<endl;
    
    //length of string
    cout<<str.length()<<endl;
    
    
    //string is empty or not
    cout<<str.empty()<<endl;
    
    
    //to append at tha back
    str.push_back('a');
    cout<<str<<endl;
    
    
    //to remove last char
    str.pop_back();
    cout<<str<<endl;
    
    
    //to get substring of stirng index, lenght of string
    cout<<str.substr(0,8)<<endl;
    
    
    //to compare two string =0 exactly same,<0 first char small ,>0 second greater 
    string a="manshi";
    string b="sharma";
    string c="manshi";
    
    if(a.compare(c)==0){
        cout<<"same"<<endl;
    }
    else{
        cout<<"not same"<<endl;
    }
    
    
    //to find index of  string present in str
    cout<<str.find("shi")<<endl;
    
    //to search something not present in string
    
    if(str.find("fkh")== std::string::npos){
        cout<<"not found"<<endl;
    }
    
    //replace  starting index, words to be removes, with what string
    string str1="Manshi Sharma";
    string str2="Shandilya";
    str1.replace(7,6,str2);
    cout<<str1<<endl;
    
    //erase starting index,ending index
    string x="Manshi Sharma";
    x.erase(5,9);
    cout<<x<<endl;
    return 0;
}
