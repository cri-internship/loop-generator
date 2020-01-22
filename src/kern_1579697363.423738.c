#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(130, "zeros");
	float **B = create_two_dim_float(870, 600, "zeros");
	float *A = create_one_dim_float(650, "zeros");
	float ***D = create_three_dim_float(450, 200, 700, "zeros");
	float **E = create_two_dim_float(420, 1000, "zeros");

	for (int b = 5; b < 595; b++)
	  for (int a = 3; a < 650; a++)
	  {
	    
	     B[a][b]=B[a-3][b-5]+0.476;
	    
	     B[a][b]=0.255;
	    
	     E[a][b]=A[a]-E[a][b]/0.387;
	     B[a][b]=A[a-2]*D[a][b][a]-C[a]/B[a][b]+C[a];
	  }

    return 0;
}