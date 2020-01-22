#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(950, 80, "random");
	float *D = create_one_dim_float(190, "random");
	float *C = create_one_dim_float(440, "random");
	float **A = create_two_dim_float(90, 430, "random");

	for (int b = 0; b < 76; b++)
	  for (int a = 4; a < 185; a++)
	  {
	    
	     D[a]=D[a-1]*C[a];
	    
	     D[a]=D[a-4]-0.04;
	    
	     B[a][b]=B[a+4][b+4]-0.16;
	    
	     C[a]=A[a][b]-D[a]/B[a][b];
	     C[a+4]=B[a][b];
	    
	     B[a][b]=0.103;
	  }

    return 0;
}