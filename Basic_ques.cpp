// 1) Write a program to find the area and perimeter of a rectangle
#include <bits/stdc++.h>
using namespace std;
/*int main(){
    int l , b , preimeter , area;
    cout<<"enter length : \n";
    cin>>l;
    cout << "enter breadth : \n";
    cin>>b;
    preimeter = 2*(l+b);
    area = l*b;
    cout<<" preimeter is " <<preimeter;
    cout<<" area is " << area;
    return 0;
}*/


// 2) Write a program to find the greatest of three numbers using nested if / else if statement only
int main(){
    int num1 , num2, num3;
    cout<<"enter 3 numbers = ";
    cin>>num1>>num2>>num3;
    if (num1>num2 ){
        if(num1>num3){
           cout<<"greatest num of all = "<<num1;
        }
        else{
            cout<<"greatest num of all = "<<num3;
        }
    }
    else{
        if (num2>num3){
            cout<<"greatest num of all = "<<num2;
        }
        else{
             cout<<"greatest num of all = "<<num3;
        }
    }
        
   
    return 0;
} 











in baby questions ko ek hi saath daalu na
