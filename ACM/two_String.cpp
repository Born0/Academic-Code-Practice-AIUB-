#include <iostream>
#include <string>
#include <algorithm>

main(){
    int t;
    scanf("%d",&t);
    std::string s1,s2;
    while(t--){
        std::cin>>s1>>s2;

        if(s1.length()!=s2.length()){printf("NO\n");}
        else{
          sort(s1.begin(),s1.end());
          sort(s2.begin(),s2.end());
          if(s1==s2){printf("YES\n");}
          else{printf("NO\n");}
        }
    }
}
