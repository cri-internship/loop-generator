#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(60, "random");
	double **E = create_two_dim_double(390, 380, "random");
	double *D = create_one_dim_double(250, "random");
	double *B = create_one_dim_double(10, "random");
	double **A = create_two_dim_double(830, 140, "random");

	for (int c = 0; c < 139; c++)
	  for (int b = 4; b < 55; b++)
	    for (int a = 4; a < 55; a++)
	    {
	      
	      C[a]=C[a+3]-E[a][b]+B[a]/A[a][b];
	      
	      A[a][b]=A[a+2][b+1]*0.759;
	      
	      D[a]=0.469;
	      D[a-4]=E[a][b]+C[a]*B[a];
	      
	      A[a][b]=C[a]-D[a];
	      B[a]=C[a+4]-0.462*D[a];
	      
	      double var_a=A[a][b]+0.869;
	      
	      D[a]=C[a]*B[a];
	      E[a][b]=C[a+5]*0.245-E[a][b]/D[a];
	    }

    return 0;
}