#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(580, "ones");
	float *B = create_one_dim_float(720, "ones");

	for (int b = 4; b < 579; b++)
	  for (int a = 4; a < 579; a++)
	  {
	    
	     B[a]=B[a-4]*0.404;
	    
	     A[a]=A[a+1]+B[a];
	  }

    return 0;
}