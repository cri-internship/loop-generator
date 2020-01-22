#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(810, 650, 690, "zeros");
	double *E = create_one_dim_double(490, "zeros");
	double *A = create_one_dim_double(40, "zeros");
	double *C = create_one_dim_double(290, "zeros");
	double ***D = create_three_dim_double(480, 860, 510, "zeros");

	for (int b = 0; b < 856; b++)
	  for (int a = 1; a < 40; a++)
	  {
	    
	     A[a]=A[a-1]/0.93;
	    
	     D[a][b][a]=E[a]/D[a][b][a]-A[a]+B[a][b][a];
	     E[a]=C[a]*C[a]/A[a]-B[a][b][a];
	    
	     D[a][b][a]=E[a];
	  }

    return 0;
}