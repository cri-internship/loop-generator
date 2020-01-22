#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(500, "zeros");
	float **A = create_two_dim_float(370, 550, "zeros");

	for (int b = 4; b < 547; b++)
	  for (int a = 3; a < 367; a++)
	  {
	    
	     A[a][b]=A[a-3][b-4]*B[a];
	    
	     B[a]=B[a+4]+A[a][b];
	    
	     A[a][b]=A[a+3][b+3]/0.622;
	  }

    return 0;
}