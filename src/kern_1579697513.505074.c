#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(740, "ones");
	double *B = create_one_dim_double(510, "ones");
	double *C = create_one_dim_double(550, "ones");
	double **D = create_two_dim_double(610, 610, "ones");
	double **A = create_two_dim_double(890, 460, "ones");

	for (int c = 1; c < 608; c++)
	  for (int b = 2; b < 510; b++)
	    for (int a = 2; a < 510; a++)
	    {
	      
	      B[a]=B[a-2]-A[a][b]+E[a]/C[a]*D[a][b];
	      
	      C[a]=C[a+1]*0.984;
	      
	      B[a]=0.48;
	      
	      D[a][b]=B[a];
	      D[a-1][b-1]=A[a][b];
	      
	      double var_a=D[a][b]-0.387;
	      double var_b=D[a][b+2]/0.537;
	      
	      C[a]=D[a][b]+B[a]-E[a]/A[a][b];
	      B[a]=D[a+1][b]-C[a]*B[a]/A[a][b];
	    }

    return 0;
}