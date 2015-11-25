#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) ;

int main(){
	int nums[5] = {1,3,2,4,5};
	int target  = 5；
	int *result = (int*)malloc(sizeof(int) * 2);
	if(result == NULL){
		printf("Error Mem\n");
		return ~0;
	}
	result = twoSum(nums, 5, 5);
	printf("%d , %d\n", result[0], result[1]);
	free(result);
	result = NULL;
	return 0;
}