#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(930, "ones");
	float **B = create_two_dim_float(480, 70, "ones");

	for (int b = 5; b < 927; b++)
	  for (int a = 5; a < 927; a++)
	  {
	    
	     A[a]=A[a-5]-0.382;
	    
	     A[a]=A[a+3]/0.607;
	    
	     B[a][b]=A[a]/0.123;
	     A[a]=A[a+1]-0.735;
	  }

    return 0;
}