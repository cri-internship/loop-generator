#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(650, 180, "ones");
	float *A = create_one_dim_float(420, "ones");

	for (int b = 0; b < 175; b++)
	  for (int a = 0; a < 417; a++)
	  {
	    
	     B[a][b]=B[a+3][b+1]/A[a];
	    
	     B[a][b]=B[a+5][b+4]+A[a];
	    
	     A[a]=A[a+3]-B[a][b];
	  }

    return 0;
}