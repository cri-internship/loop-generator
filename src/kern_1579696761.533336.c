#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(940, "random");
	float **B = create_two_dim_float(860, 730, "random");
	float *C = create_one_dim_float(330, "random");
	float *A = create_one_dim_float(350, "random");
	float **D = create_two_dim_float(890, 210, "random");

	for (int b = 0; b < 730; b++)
	  for (int a = 5; a < 349; a++)
	  {
	    
	     A[a]=A[a-5]+E[a]*0.133;
	    
	     B[a][b]=A[a]*0.159+B[a][b]-C[a];
	     D[a][b]=A[a+1]*D[a][b];
	    
	     float var_a=B[a][b]/0.081;
	     float var_b=B[a+5][b]*0.987;
	  }

    return 0;
}