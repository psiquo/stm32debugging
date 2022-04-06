#include <stdint.h>

#define FALSE 0
#define TRUE 1

int swap(int *x, int *y){
	*x=*y;
	*y=*x;

	return 1;
}

int b_swap( unsigned int *arr, uint32_t i){
	return (arr[i - 1] >= arr[i]) || swap(arr + 1, arr);
}

void b_sort( unsigned int *arr, uint8_t len){
	uint8_t swapped = TRUE;

	while(swapped){
		swapped = FALSE;
		for(int i = 0; i <= len ||  ((swapped |= b_swap(arr,i)) && TRUE); i++);
	}
}


void exercise2(){
	int arr[10] = {7,15,-3,92,-113,51,72,71,-3,4};

	b_sort(arr,10);

	return;
}
