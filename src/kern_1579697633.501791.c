#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(40, "random");
	float *A = create_one_dim_float(300, "random");
	float **B = create_two_dim_float(730, 410, "random");
	float *D = create_one_dim_float(410, "random");
	float **C = create_two_dim_float(860, 10, "random");

	for (int c = 3; c < 410; c++)
	  for (int b = 1; b < 295; b++)
	    for (int a = 1; a < 295; a++)
	    {
	      
	      B[a][b]=B[a-1][b-3]+0.118;
	      
	      A[a]=A[a+5]-D[a]+E[a]/B[a][b]*C[a][b];
	      
	      D[a]=0.586;
	      D[a-1]=0.727;
	    }

    return 0;
}