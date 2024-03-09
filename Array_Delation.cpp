#include<iostream>
using namespace std;

int main(){

int k, i, n=8, mimo[10] = {1,2,3,4,5,6,7,8};    // n=total elements
n--;     //Deleting the last element of the array. Decrease n; last element 8 is no longer part of list.


n--;    // deleting the value 1 will decrease the total elements n by one

for(i=0; i<n; i++)
    mimo[i] = mimo[i+1];

    k=2;

n--;

for(i=k; i<n; i++)
    mimo[i] = mimo[i+1];

    for(i=0; i<n; i++)

        cout<<mimo[i] << " ";


}

