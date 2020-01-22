#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(750, 500, "zeros");
	float *E = create_one_dim_float(80, "zeros");
	float **B = create_two_dim_float(580, 450, "zeros");
	float *A = create_one_dim_float(1000, "zeros");
	float ***C = create_three_dim_float(790, 660, 750, "zeros");

	for (int b = 5; b < 656; b++)
	  for (int a = 4; a < 786; a++)
	  {
	    
	     C[a][b][a]=C[a-2][b-1][a-2]+0.953;
	    
	     A[a]=A[a-1]*E[a]-C[a][b][a]/B[a][b];
	    
	     C[a][b][a]=A[a]/D[a][b];
	    
	     B[a][b]=A[a]-D[a][b]/B[a][b];
	     D[a][b]=A[a+3]-C[a][b][a]+0.475/D[a][b];
	  }

    return 0;
}