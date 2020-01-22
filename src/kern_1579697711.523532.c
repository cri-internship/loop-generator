#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(270, "zeros");
	float **A = create_two_dim_float(160, 110, "zeros");
	float **B = create_two_dim_float(510, 40, "zeros");
	float *D = create_one_dim_float(10, "zeros");

	for (int b = 5; b < 40; b++)
	  for (int a = 5; a < 10; a++)
	  {
	    
	     A[a][b]=A[a][b-3]/C[a]+D[a]-B[a][b];
	    
	     B[a][b]=B[a-5][b-5]/0.16;
	    
	     A[a][b]=A[a][b+3]*0.844;
	    
	     D[a]=0.501;
	     D[a-3]=0.232;
	  }

    return 0;
}