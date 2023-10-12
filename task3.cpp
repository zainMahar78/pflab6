#include<iostream>
using namespace std;
float perimeter(float val,char shape);
main(){
     char shape ;
      float val;
    cout<<"Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
    cin >> shape;
    cout<<"Enter the value: ";
    cin>>val;
    float result;
    result=perimeter(val, shape);
    cout<<"The perimeter is: " <<result;
}
float perimeter(float val,char shape){
    float p1;
    if(shape=='s'){
        p1=4*val;
    }
    if(shape=='c'){
        p1=6.28*val;
    }
    if(shape=='t'){
        p1=3*val;
    }
    if(shape=='h'){
        p1=6*val;
    }
    return p1;
}