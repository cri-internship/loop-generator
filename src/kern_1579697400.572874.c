#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **E = create_two_dim_float(350, 150, "random");
	float ***C = create_three_dim_float(10, 410, 920, "random");
	float *D = create_one_dim_float(940, "random");
	float *A = create_one_dim_float(380, "random");
	float *B = create_one_dim_float(410, "random");

	for (int b = 0; b < 940; b++)
	  for (int a = 0; a < 940; a++)
	  {
	    
	     D[a]=C[a][b][a]-B[a]*E[a][b];
	     A[a]=D[a]/A[a]+E[a][b]-C[a][b][a]*A[a];
	  }

    return 0;
}