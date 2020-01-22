#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(720, 630, "ones");
	int *B = create_one_dim_int(860, "ones");
	int *C = create_one_dim_int(380, "ones");

	for (int d = 0; d < 855; d++)
	  for (int c = 0; c < 855; c++)
	    for (int b = 0; b < 855; b++)
	      for (int a = 0; a < 855; a++)
	      {
	        
	       B[a]=B[a]+A[a][b];
	       B[a]=C[a]+22;
	        
	       B[a]=B[a+5]-A[a][b];
	      }

    return 0;
}