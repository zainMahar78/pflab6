#include<iostream>
using namespace std;
float totalIncome(string type, int r ,int c);
main(){
    string type;
    int r, c;
    cout<<"Enter the screening type (Premiere/Normal/Discount): ";
    cin>>type;
    cout<<"Enter the number of rows: ";
    cin>>r;
    cout<<"Enter the number of columns: ";
    cin>>c;
    float result=totalIncome(type, r,c);
    cout<<result;
}
float totalIncome(string type, int r ,int c){
    float income;
    const float pprice=12.00;
    const float nprice=7.50;
    const float dprice=5.00;
    if(type=="Premiere"){
        income=pprice*r*c;

    } 
    if(type=="Normal"){
        income=nprice*r*c;
    }
    if(type=="Discount"){
        income=dprice*r*c;
    }
    return income;
}