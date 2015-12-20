
/*测试程序*/

#include <stdio.h>
#include <stdlib.h>

#include "twoSum.h"

int main(){
	int src[5] = {-1 , 0 , 1 ,2 ,4};
	int target = 2;
	int *dst;
	
	dst = twoSum (src, 5, target);
	
	if (dst != NULL)
	{
	    printf("index1 = %d, index2 = %d \n", dst[0], dst[1]);
    }
	else
	{
	    printf("Error\n");
	}
	return 0;
}