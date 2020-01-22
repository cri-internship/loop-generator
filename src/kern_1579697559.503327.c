#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(760, 960, "random");
	float *B = create_one_dim_float(280, "random");
	float *C = create_one_dim_float(500, "random");

	for (int b = 0; b < 955; b++)
	  for (int a = 4; a < 280; a++)
	  {
	    
	     B[a]=B[a-2]*C[a];
	    
	     C[a]=0.974-A[a][b];
	     C[a]=C[a]-A[a][b];
	    
	     A[a][b]=0.757;
	     A[a+4][b+5]=0.368;
	    
	     B[a]=A[a][b];
	  }

    return 0;
}