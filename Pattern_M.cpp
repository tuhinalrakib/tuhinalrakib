/*
    This Pattern Printing Solution
    *      *
    **    **
    ***  ***
    ********
    ***  ***
    **    **
    *      *
*/


#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int s=2*n-2,k=1;
    int s1=n/2,k1 = n-1;
    for(int i=0;i<2*n;i++){
        if(i<n){
            for(int j=0;j<k;j++){
                cout << "*";
            }
            for(int j=0;j<s;j++){
                cout <<" ";
            }
            for(int j=0;j<k;j++){
                cout << "*";
            }
            k++;
            s-=2;
        }
        if(i>=n){
            for(int j=0;j<k1;j++){
                cout << "*";
            }
            for(int j=0;j<s1;j++){
                cout <<" ";
            }
            for(int j=0;j<k1;j++){
                cout << "*";
            }   
            k1--;
            s1+=2;
        }
        
        cout << endl;
    }
    return 0;
}