#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char array[100000]="aabac";
    int sizee=sizeof(array)/sizeof(array[0]);
    sort(array,array+sizee);
    for(int i=0;i<sizee;i++)
    {
        printf("%c ",array[i]);
    }
    
    return 0;
}