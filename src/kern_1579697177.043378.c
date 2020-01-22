#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(200, "ones");
	float **B = create_two_dim_float(900, 770, "ones");

	for (int b = 1; b < 770; b++)
	  for (int a = 2; a < 200; a++)
	  {
	    
	     B[a][b]=B[a-2][b-1]-A[a];
	    
	     A[a]=B[a][b];
	     A[a-1]=B[a][b];
	  }

    return 0;
}