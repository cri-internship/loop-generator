#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(530, "zeros");
	double **C = create_two_dim_double(880, 800, "zeros");
	double **A = create_two_dim_double(850, 90, "zeros");
	double *B = create_one_dim_double(580, "zeros");

	for (int c = 0; c < 800; c++)
	  for (int b = 5; b < 530; b++)
	    for (int a = 5; a < 530; a++)
	    {
	      
	      D[a]=C[a][b]+B[a]/A[a][b];
	      B[a]=D[a]/0.141*B[a];
	      
	      double var_a=C[a][b]+0.01;
	      C[a][b]=0.196;
	      
	      C[a][b]=D[a]+C[a][b]-B[a]*A[a][b];
	      A[a][b]=D[a-5]-C[a][b]/0.45;
	    }

    return 0;
}