#include<iostream>
using namespace std;
bool parityAnalysis(int num);
main (){
int n1;
    cout<<"Enter a 3-digit number: ";
    cin>>n1;
    bool result=parityAnalysis(n1);
    cout<< result;
}
bool parityAnalysis(int num){
 int n1=num%10;
 int n2=num/10;
 int n3=n2%10;
 int n4=n2/10;
 int sum=n1+n3+n4;
    if(num%2==0 && sum%2==0){
        return 1;

    }
    return 0;
}