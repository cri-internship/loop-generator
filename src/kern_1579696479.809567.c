#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(910, "random");
	float **A = create_two_dim_float(910, 350, "random");

	for (int b = 5; b < 910; b++)
	  for (int a = 5; a < 910; a++)
	  {
	    
	     B[a]=B[a-5]/0.892;
	    
	     B[a]=0.267;
	    
	     A[a][b]=B[a]/0.589;
	     B[a]=B[a-1]*A[a][b];
	  }

    return 0;
}