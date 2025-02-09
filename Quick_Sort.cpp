#include<stdio.h>

int partition(int array[],int start,int end){
	int i = start-1;
	int j = start;
	int piv = array[end];
	
	for(j ; j < end ; j++){
     	if(piv >= array[j]){
		i++;
		int temp = array[i];
		array[i] = array[j];
		array[j] = temp;
    	}
	}
	
	i++;
	array[end] = array[i];
	array[i] = piv;
	
	return i;
}

void q_sort(int array[],int start,int end){
	if(start < end){
		int piv = partition(array,start,end);
		q_sort(array,start,piv-1);
		q_sort(array,piv+1,end);
	}
}

int main(){
	
	int array[6] = {5,2,6,4,1,3};
	q_sort(array,0,5);
	
	for(int i = 0 ; i < 6 ; i++){
		printf("%d\n",array[i]);
	}
	
	return 0;
}
