#include<iostream>
using namespace std;

void selection_sort(int arr[], int length){

for(int i =0; i <(length - 1);i++){
    int min_pos = i;
  for(int j=i+1; j<length;j++){
    if(arr[j]<arr[min_pos]){
        min_pos =j;
    }
  }
  if(min_pos != i){
    int temp =arr[i];
    arr[i]=arr[min_pos];
    arr[min_pos] = temp;
  }
}

}

int main(){

	int arr[] ={6,2,5,1,3,4};
	int length = 6;
	selection_sort(arr,length);
	for(int i =0; i<length;i++){
        cout<<arr[i]<<endl;
	}
	return 0;
}
