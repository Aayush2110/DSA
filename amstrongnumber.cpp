#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
int sum=0;
int dup=n;
while(n>0){
int ln=n%10;
sum=sum+(ln*ln*ln);
n=n/10;

}
if(sum==dup){
    cout<<"armstrong number"<<endl;
}
else{
    cout<<"not armstrong number"<<endl;


}