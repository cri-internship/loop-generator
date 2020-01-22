#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(400, "random");
	int **B = create_two_dim_int(460, 840, "random");
	int *A = create_one_dim_int(880, "random");

	for (int d = 3; d < 835; d++)
	  for (int c = 3; c < 400; c++)
	    for (int b = 3; b < 400; b++)
	      for (int a = 3; a < 400; a++)
	      {
	        
	       B[a][b]=B[a-3][b-3]/16;
	        
	       C[a]=C[a]/A[a];
	       C[a]=B[a][b]-A[a];
	        
	       A[a]=C[a]*C[a];
	       A[a-2]=B[a][b];
	        
	       A[a]=11;
	        
	       int var_a=B[a][b]*40;
	       int var_b=B[a+3][b+5]*3;
	        
	       B[a][b]=B[a][b]/A[a];
	       A[a]=B[a+5][b+4]-A[a];
	      }

    return 0;
}