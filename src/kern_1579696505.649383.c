#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(280, 520, "zeros");
	double *C = create_one_dim_double(900, "zeros");
	double **B = create_two_dim_double(70, 240, "zeros");
	double **A = create_two_dim_double(300, 490, "zeros");

	for (int c = 1; c < 236; c++)
	  for (int b = 0; b < 70; b++)
	    for (int a = 0; a < 70; a++)
	    {
	      
	      A[a][b]=A[a][b-1]*C[a]/B[a][b]-D[a][b];
	      
	      A[a][b]=A[a+4][b+1]-C[a]*D[a][b];
	      
	      A[a][b]=A[a+5][b+1]/B[a][b];
	      
	      double var_a=B[a][b]*0.835;
	      double var_b=B[a][b+4]-0.293;
	    }

    return 0;
}