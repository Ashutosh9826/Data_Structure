#include<iostream>

using namespace std;

int main(){
	int n;
	cout << "enter the number of terms : ";
	cin >> n;
	
	int array[n];
	for(int i = 1 ; i <= n ; i++){
		cout << "enter the " << i << "th term \n";
		cin >> array[i];
	}
	
	int temp;
	
	for (int i = 0 ; i < n-1 ; i++){
		for(int j = 1 ; j < n -i ; j++){
			if(array[j] > array[j+1]){
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
			
		}
	}
	
	cout << endl;
	
	for(int i = 1 ; i <= n ; i++){
		cout << array[i] << "\n";
	}
	
	cout << endl;
	cout << "The higest term is " << array[n];
	
	return 0;
}
