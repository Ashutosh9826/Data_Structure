#include<iostream>
#include<algorithm>

using namespace std;

int bsearch(int *array , int num , int start , int mid , int end){
	if(array[mid] == num){
		cout << "The index of " << num <<" is " << mid ;
		return 0;
	}
	else{
		if(array[mid] < num){
			start = mid + 1;
		}
		else{
			end = mid -1;
		}
	}
	if(end < start){
		cout << "the element " << num << " was not found";
	    return 0;
	}
	
	mid = (start+end)/2;
	
	bsearch(array , num , start , mid , end);
}

int main(){
	
	int n;
	cout << "enter the size of the array : ";
	cin >> n;
	
	int array[n];
	
	cout << "enter the elements in the array :\n";
	for(int i = 0 ; i < n ; i++){
		cin >> array[i];
	}
	
	for(int i = 0 ; i < n-1 ; i++){
		for(int j = 0 ; j < n-1-i ; j++){
			if(array[j] > array[j+1]){
				swap(array[j], array[j+1]);
			}
    	}
	}
	
	for(int i = 0 ; i <n ; i++){
		cout << array[i];
	}
	cout << endl;
	
	int num;
	cout << "enter the element to find : ";
	cin >> num;
	
	int start = 0;
	int end = n-1;
	int mid = (start + end)/2;
	
	bsearch(array,num,start,mid,end);
	
	return 0;
}
