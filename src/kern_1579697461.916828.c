#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(410, 840, "zeros");
	float *E = create_one_dim_float(610, "zeros");
	float *B = create_one_dim_float(130, "zeros");
	float *A = create_one_dim_float(650, "zeros");
	float *C = create_one_dim_float(890, "zeros");

	for (int b = 4; b < 840; b++)
	  for (int a = 5; a < 130; a++)
	  {
	    
	     D[a][b]=D[a-4][b-4]-E[a]*C[a]/A[a]+0.884;
	    
	     D[a][b]=D[a-2][b-2]+E[a]-C[a];
	    
	     E[a]=0.128;
	     E[a+2]=0.092;
	    
	     B[a]=D[a][b]*C[a]-D[a][b];
	     B[a-3]=E[a]/D[a][b]-A[a];
	    
	     B[a]=0.515-A[a];
	    
	     C[a]=B[a]+D[a][b]*E[a]/0.88;
	     C[a+1]=D[a][b];
	  }

    return 0;
}