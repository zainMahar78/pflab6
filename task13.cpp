#include<iostream>
using namespace std;
float lowestprice(int ,string);
main(){
    int km;
    string d;
    cout<<"Enter the number of kilometers: ";
    cin>>km;
    cout<<"Enter the period of the day (day/night): ";
    cin>>d;
    float result=lowestprice(km , d);
    cout<<"Lowest price for "<<km<<" kilometers: "<<result<<"EUR";
}
float lowestprice(int km , string d){
  float price;
    if(km<=19 && d=="day" ){
    price=km*0.79;
	price=0.70+price;
}
if(km<=19 && d=="night"){
    price=km*0.90;
	price=0.70+price;
}
    if(km>=20 &&( d=="day" || d=="night") ){
        price=km*0.09;
    }
    if(km>=100 && (d=="night" || d=="day")){
        price=km*0.06;
    }
    return price;
    }
    