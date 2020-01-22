#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(920, "ones");
	double ***A = create_three_dim_double(570, 870, 140, "ones");
	double *C = create_one_dim_double(640, "ones");
	double **E = create_two_dim_double(650, 60, "ones");
	double **D = create_two_dim_double(290, 440, "ones");

	for (int c = 5; c < 140; c++)
	  for (int b = 5; b < 60; b++)
	    for (int a = 5; a < 290; a++)
	    {
	      
	      D[a][b]=D[a][b-2]+E[a][b]/C[a];
	      
	      C[a]=C[a-1]*B[a];
	      
	      A[a][b][c]=A[a-4][b-2][c-5]+0.291;
	      
	      E[a][b]=E[a+5][b]-0.186*A[a][b][c]/D[a][b];
	      
	      double var_a=B[a]/0.659;
	      B[a]=0.07;
	      
	      D[a][b]=A[a][b][c]+E[a][b];
	      E[a][b]=A[a-5][b-3][c-2]*B[a];
	      
	      double var_b=E[a][b]-0.065;
	      double var_c=E[a-3][b-5]*0.281;
	    }

    return 0;
}