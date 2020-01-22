#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(700, "zeros");
	double *B = create_one_dim_double(160, "zeros");
	double **D = create_two_dim_double(90, 370, "zeros");
	double *C = create_one_dim_double(440, "zeros");
	double **E = create_two_dim_double(440, 310, "zeros");

	for (int c = 0; c < 307; c++)
	  for (int b = 4; b < 86; b++)
	    for (int a = 4; a < 86; a++)
	    {
	      
	      D[a][b]=D[a+2][b+1]/0.981;
	      
	      B[a]=B[a+4]/0.374-C[a]+D[a][b];
	      
	      C[a]=C[a+4]/B[a]-A[a];
	      
	      E[a][b]=B[a]/0.629-A[a];
	      E[a+4][b+3]=C[a]/B[a];
	      
	      double var_a=A[a]-0.938;
	      double var_b=A[a-4]-0.171;
	      
	      double var_c=D[a][b]-0.153;
	      double var_d=D[a+4][b+4]+0.451;
	    }

    return 0;
}