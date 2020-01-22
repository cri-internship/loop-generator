#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(370, "zeros");
	double *B = create_one_dim_double(980, "zeros");
	double ***E = create_three_dim_double(170, 70, 390, "zeros");
	double *A = create_one_dim_double(700, "zeros");
	double *D = create_one_dim_double(140, "zeros");

	for (int b = 4; b < 366; b++)
	  for (int a = 4; a < 366; a++)
	  {
	    
	     C[a]=C[a+4]+E[a][b][a]-B[a]*D[a];
	    
	     C[a]=0.492;
	    
	     E[a][b][a]=A[a]-C[a]+B[a]/E[a][b][a]*D[a];
	     D[a]=A[a-4]-C[a]/B[a];
	    
	     A[a]=A[a]*D[a]/E[a][b][a]+C[a]-B[a];
	     C[a]=A[a+3]/0.88+E[a][b][a]*C[a]-D[a];
	  }

    return 0;
}