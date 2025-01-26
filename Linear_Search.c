#include<stdio.h>

int main(){
	
	int array[] = {1,2,3,4,5,6,7,8,9,0};
	int num;
	int found;
	printf("enter the element to find in the array : ");
	scanf("%d", &num);
	
	for(int i = 0 ; i < 10 ; i++){
		if(array[i] == num){
			printf("the %d is at index %d",num,i);
			found = 1;
			break;
		}
		else{
			found = 0;
		}
	}
	
	if(!found){
		printf("the number not found in the array ");
	}
	return 0;
}
