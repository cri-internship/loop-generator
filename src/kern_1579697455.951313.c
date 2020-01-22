#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(610, 420, "ones");
	double **B = create_two_dim_double(440, 490, "ones");
	double ***C = create_three_dim_double(700, 170, 480, "ones");
	double *D = create_one_dim_double(440, "ones");

	for (int c = 3; c < 480; c++)
	  for (int b = 1; b < 170; b++)
	    for (int a = 3; a < 436; a++)
	    {
	      
	      B[a][b]=B[a-3][b]-A[a][b]+D[a]/C[a][b][c];
	      
	      D[a]=D[a-1]+0.584;
	      
	      A[a][b]=B[a][b]/C[a][b][c];
	      A[a-1][b-1]=D[a]+C[a][b][c]/B[a][b];
	      
	      double var_a=B[a][b]-0.066;
	      double var_b=B[a+4][b+1]-0.082;
	      
	      B[a][b]=C[a][b][c]+A[a][b];
	      C[a][b][c]=C[a-3][b-1][c-3]+D[a]-B[a][b];
	    }

    return 0;
}