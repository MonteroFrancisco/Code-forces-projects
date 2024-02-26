#include <iostream>
using namespace std;
int main(){
int a,b,c,d,count=0;
int n=0;
cin >>n;
for(int i=0; i <n;i++){
    cin >>a>>b>>c;
    d= a+b+c;
    if(d>=2){
        count++;
    }

}
cout<<count<< endl;
return 0;}
