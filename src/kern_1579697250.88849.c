#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(10, 360, "random");
	double ***E = create_three_dim_double(430, 930, 310, "random");
	double **A = create_two_dim_double(70, 320, "random");
	double **C = create_two_dim_double(780, 960, "random");
	double ***D = create_three_dim_double(290, 120, 300, "random");

	for (int c = 5; c < 297; c++)
	  for (int b = 5; b < 118; b++)
	    for (int a = 3; a < 286; a++)
	    {
	      
	      C[a][b]=C[a-1][b-5]*B[a][b]/D[a][b][c];
	      
	      D[a][b][c]=D[a-3][b-2][c-5]+E[a][b][c];
	      
	      D[a][b][c]=D[a+4][b+2][c+3]/0.172;
	      
	      C[a][b]=C[a][b+2]-A[a][b]+0.956*A[a][b]/E[a][b][c];
	      
	      double var_a=E[a][b][c]+0.268;
	      double var_b=E[a-2][b-4][c-2]+0.357;
	    }

    return 0;
}