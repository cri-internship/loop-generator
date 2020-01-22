#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(270, 910, "ones");
	double *D = create_one_dim_double(650, "ones");
	double ***B = create_three_dim_double(210, 860, 760, "ones");
	double *A = create_one_dim_double(120, "ones");

	for (int c = 0; c < 757; c++)
	  for (int b = 3; b < 859; b++)
	    for (int a = 4; a < 207; a++)
	    {
	      
	      D[a]=D[a-1]+0.384/C[a][b];
	      
	      C[a][b]=C[a-2][b-3]+0.546;
	      
	      B[a][b][c]=B[a+3][b+1][c+3]-D[a]+A[a];
	      
	      D[a]=D[a+1]/0.276;
	      
	      double var_a=D[a]/0.42;
	      double var_b=D[a-4]+0.413;
	      
	      double var_c=D[a]-0.592;
	      double var_d=D[a+5]/0.749;
	    }

    return 0;
}