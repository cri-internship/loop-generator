#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(740, "random");
	float **B = create_two_dim_float(370, 910, "random");

	for (int b = 0; b < 906; b++)
	  for (int a = 0; a < 368; a++)
	  {
	    
	     A[a]=A[a+5]+0.319;
	    
	     B[a][b]=B[a][b+4]+A[a];
	    
	     B[a][b]=A[a];
	  }

    return 0;
}