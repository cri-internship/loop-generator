#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(240, 290, "zeros");
	float *C = create_one_dim_float(410, "zeros");
	float ***D = create_three_dim_float(890, 720, 430, "zeros");
	float *A = create_one_dim_float(640, "zeros");

	for (int b = 4; b < 410; b++)
	  for (int a = 4; a < 410; a++)
	  {
	    
	     A[a]=B[a][b]-C[a];
	     A[a]=A[a]+D[a][b][a]*0.851/B[a][b];
	    
	     C[a]=C[a-4]*A[a]/A[a]+0.568;
	  }

    return 0;
}