#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(350, "ones");
	int *C = create_one_dim_int(390, "ones");
	int **B = create_two_dim_int(970, 990, "ones");

	for (int d = 2; d < 350; d++)
	  for (int c = 2; c < 350; c++)
	    for (int b = 2; b < 350; b++)
	      for (int a = 2; a < 350; a++)
	      {
	        
	       C[a]=A[a]-B[a][b];
	       A[a]=C[a]*B[a][b]-A[a];
	        
	       C[a]=A[a]*B[a][b];
	        
	       A[a]=C[a]-B[a][b];
	        
	       int var_a=C[a]+19;
	       int var_b=C[a+2]/1;
	        
	       B[a][b]=C[a]*A[a]-B[a][b];
	       C[a]=C[a-2]+A[a];
	      }

    return 0;
}