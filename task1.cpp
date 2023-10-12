#include<iostream>
using namespace std;
bool number(int num1, int num2);
main(){
    int n1,n2;
    cout<<"Enter the first number: ";
    cin>>n1;
    cout<<"Enter the second number: ";
    cin>>n2;
bool result;
    result=number(n1,n2);
    cout<<result;
}
bool number(int num1, int num2){
    if(num1>num2){
        return true;
    } 
    
        return false;
    

}