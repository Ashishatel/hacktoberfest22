#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int testing,ram=1;
    cin>>testing;
    while(testing--){
        
        string sp;
        cin>>sp;
        
        string final="";
        
        int jay=1;
        for(int i=0;i<sp.length()-1;i++){
            
            if(sp[i]<sp[i+1]){
                for(int mp=0;mp<jay;mp++){
                     final=final+sp[i]+sp[i];
                }
               jay=1;
            }else if(sp[i]>sp[i+1]){
                for(int mp=0;mp<jay;mp++){
                     final=final+sp[i];
                }
                
                jay=1;
            }else{
                jay++;
            }
            
        }
        
        if(jay>1){
            for(auto i=0;i<jay-1;i++){
                final=final+sp[sp.length()-1];
            }
        }
        final=final+sp[sp.length()-1];
        cout<<"Case #"<<ram<<": "<<final<<"\n";
    
        ++ram;
    }
    return 0;
}