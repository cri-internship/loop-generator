#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(880, 960, "random");
	double **C = create_two_dim_double(500, 760, "random");
	double *E = create_one_dim_double(560, "random");
	double *A = create_one_dim_double(500, "random");
	double *B = create_one_dim_double(700, "random");

	for (int c = 0; c < 759; c++)
	  for (int b = 5; b < 496; b++)
	    for (int a = 5; a < 496; a++)
	    {
	      
	      E[a]=B[a];
	      A[a]=E[a]-0.411;
	      
	      C[a][b]=E[a]/A[a]+E[a];
	      C[a+4][b+1]=0.531;
	      
	      D[a][b]=0.871;
	      D[a+5][b+3]=A[a]+B[a]*E[a]-C[a][b];
	      
	      E[a]=B[a]-D[a][b];
	    }

    return 0;
}