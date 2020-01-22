#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(90, "random");
	int **B = create_two_dim_int(650, 760, "random");
	int **C = create_two_dim_int(540, 690, "random");

	for (int d = 2; d < 756; d++)
	  for (int c = 3; c < 649; c++)
	    for (int b = 3; b < 649; b++)
	      for (int a = 3; a < 649; a++)
	      {
	        
	       int var_a=B[a][b]*32;
	       int var_b=B[a+1][b+4]-41;
	        
	       B[a][b]=B[a][b]*C[a][b]/A[a];
	       C[a][b]=B[a-3][b-2]-A[a];
	      }

    return 0;
}