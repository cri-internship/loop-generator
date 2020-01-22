#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(850, "random");
	int **A = create_two_dim_int(610, 500, "random");
	int *D = create_one_dim_int(270, "random");
	int *B = create_one_dim_int(540, "random");

	for (int d = 2; d < 540; d++)
	  for (int c = 2; c < 540; c++)
	    for (int b = 2; b < 540; b++)
	      for (int a = 2; a < 540; a++)
	      {
	        
	       B[a]=B[a-1]+28;
	        
	       C[a]=C[a-2]+B[a];
	        
	       int var_a=B[a]/43;
	      }

    return 0;
}