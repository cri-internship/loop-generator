#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(210, 960, 310, "ones");
	float *D = create_one_dim_float(780, "ones");
	float *A = create_one_dim_float(650, "ones");
	float *C = create_one_dim_float(500, "ones");
	float **E = create_two_dim_float(940, 140, "ones");

	for (int b = 4; b < 140; b++)
	  for (int a = 2; a < 500; a++)
	  {
	    
	     A[a]=E[a][b];
	     D[a]=A[a]*C[a]/B[a][b][a];
	    
	     E[a][b]=E[a-1][b-4]*A[a]-D[a]/A[a]+D[a];
	    
	     C[a]=C[a-2]+B[a][b][a]/E[a][b]*D[a]-A[a];
	    
	     E[a][b]=E[a+3][b]+0.246;
	    
	     C[a]=B[a][b][a]+E[a][b]-0.33;
	    
	     E[a][b]=D[a]+B[a][b][a]-C[a]/E[a][b]*A[a];
	     A[a]=D[a+5]*C[a]-E[a][b]+B[a][b][a];
	  }

    return 0;
}