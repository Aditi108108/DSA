//Write a program to calculate the factorial of a number.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cout<<"enter the number to find its facorial";
    cin>>n;
    int fact=1;
    for (int i=1;i<=n;i++){
        fact=fact*i;
        fact;
        
    } 
    cout<<"the factorial is "<<fact;
    return 0;
}