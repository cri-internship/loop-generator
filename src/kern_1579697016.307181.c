#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(170, "ones");
	int *A = create_one_dim_int(500, "ones");
	int **D = create_two_dim_int(130, 700, "ones");
	int *C = create_one_dim_int(710, "ones");

	for (int d = 0; d < 696; d++)
	  for (int c = 2; c < 127; c++)
	    for (int b = 2; b < 127; b++)
	      for (int a = 2; a < 127; a++)
	      {
	        
	       B[a]=B[a-2]/11;
	        
	       D[a][b]=32;
	       D[a+3][b+4]=50;
	        
	       B[a]=B[a]+C[a]/A[a];
	       D[a][b]=B[a+2]+D[a][b]*1;
	      }

    return 0;
}