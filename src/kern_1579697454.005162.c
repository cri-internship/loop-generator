#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(370, "ones");
	float *A = create_one_dim_float(200, "ones");

	for (int b = 5; b < 195; b++)
	  for (int a = 5; a < 195; a++)
	  {
	    
	     A[a]=A[a-5]/0.579;
	    
	     B[a]=B[a+5]-0.036;
	    
	     B[a]=A[a];
	    
	     A[a]=B[a]+A[a];
	     B[a]=B[a-3]-A[a];
	    
	     B[a]=A[a]/B[a];
	     A[a]=A[a+5]-B[a];
	  }

    return 0;
}