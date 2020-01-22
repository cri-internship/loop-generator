#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(940, 190, "random");
	float *A = create_one_dim_float(180, "random");

	for (int b = 3; b < 188; b++)
	  for (int a = 4; a < 180; a++)
	  {
	    
	     A[a]=A[a-4]/0.791;
	    
	     B[a][b]=B[a-4][b-3]-0.317;
	    
	     B[a][b]=B[a][b-1]-0.631;
	    
	     B[a][b]=B[a+1][b+2]-A[a];
	  }

    return 0;
}