#include <iostream>
using namespace std;
 
int main(){
 
    int t;
    cin>>t;
 
    while (t--)
    {
        int n,count=0;
        string s;
        cin>>n>>s;
        int array[27]={0};
       for(int i=0;i<n;i++){
        //   ASCII Value
           array[s[i]-'A']++;
           if(array[s[i]-'A']==(s[i]-'A')+1){
               count++;
           }
       }
       cout<<count<<endl;
        
    }
    
}
