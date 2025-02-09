#include<stdio.h>

void merge(int array[] , int start , int mid , int end){
	int i = start;
	int j = mid+1;
	int k = 0;
	int temp[end-start+1];
	
	while(i <= mid && j <= end){
		if(array[i] < array[j]){
			temp[k] = array[i];
			k++;
			i++;
		}
		else{
			temp[k] = array[j];
			k++;
			j++;
		}
	}
	
	while(i <= mid){
		temp[k] = array[i];
		k++;
		i++;
	}
	while(j <= end){
		temp[k] = array[j];
		k++;
		j++;
	}
	i=start;
	k=0;
	
	for(i ; i<=end ; i++){
		array[i] = temp[k];
		k++;
	}
	
}

void m_sort(int array[] , int start , int end){
	
	if(start < end){
		
		int mid = start + (end - start)/2;
		
		m_sort(array,start,mid);
		m_sort(array,mid+1,end);
		
		merge(array,start,mid,end);
	}
}

int main(){
	
	int array[6] = {5,2,6,4,1,3};
	
	m_sort(array,0,5);
	
	for(int b = 0 ; b < 6 ; b++){
		printf("%d\n",array[b]);
	}
	
	return 0;
}
