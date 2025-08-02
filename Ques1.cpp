//Given a number n, find out and return the no of digits in the number
#include <bits/stdc++.h>
using namespace std;
int countNum(int num){
    return to_string(abs(num)).length();
}

int main(){ 
    int n;
    cin >> n;
    cout << countNum(n);
    return 0;
}