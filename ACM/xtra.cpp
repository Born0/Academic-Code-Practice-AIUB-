#include<iostream>
using namespace std;
typedef long long ll;
void perform(ll *p,ll n);

static ll count=0;
main(){
    int t;
    cin>>t;
    ll n,check;
    while(t--){
      count=0;
        bool flag=false,br=false;
        cin>>n;
        ll p[n],i;
        for(i=0;i<n;i++){
            cin>>p[i];
        }
        while(n--){
            check=p[0];
            for(i=0;i<n;i++){
                 if(check!=p[i]){
                     flag=true;
                  }
            }
            if(flag){
              flag=false;
              perform(p,n);
            }
            else if(!flag){
                br=true;
                break;
            }
        }
         if(br){
            cout<<count<<endl;
         }
         else{
            cout<<-1<<endl;
        }

    }

}

void perform(ll *p,ll n){
    for(ll i=0;i<n;i++){
        p[i]=p[p[i]];
    }
    count++;
}
