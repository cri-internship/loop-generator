#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(530, "ones");
	int *B = create_one_dim_int(270, "ones");
	int **C = create_two_dim_int(690, 620, "ones");

	for (int d = 1; d < 617; d++)
	  for (int c = 2; c < 266; c++)
	    for (int b = 2; b < 266; b++)
	      for (int a = 2; a < 266; a++)
	      {
	        
	       C[a][b]=C[a+4][b+3]*A[a];
	        
	       B[a]=B[a+4]-0;
	        
	       B[a]=B[a+2]*10;
	        
	       A[a]=C[a][b]-B[a];
	       A[a]=33;
	        
	       int var_a=C[a][b]/24;
	       int var_b=C[a-2][b-1]/49;
	      }

    return 0;
}