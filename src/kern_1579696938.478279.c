#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(870, 230, 190, "ones");
	double ***C = create_three_dim_double(150, 930, 140, "ones");
	double **D = create_two_dim_double(510, 700, "ones");
	double **B = create_two_dim_double(460, 970, "ones");
	double ***E = create_three_dim_double(340, 810, 680, "ones");

	for (int c = 5; c < 138; c++)
	  for (int b = 4; b < 230; b++)
	    for (int a = 3; a < 146; a++)
	    {
	      
	      E[a][b][c]=E[a-1][b-4][c-5]/0.402;
	      
	      A[a][b][c]=A[a-3][b-2][c-3]*B[a][b]/E[a][b][c]+C[a][b][c];
	      
	      D[a][b]=D[a-3][b]/0.642;
	      
	      A[a][b][c]=A[a-3][b-1][c-1]/D[a][b]-C[a][b][c];
	      
	      double var_a=C[a][b][c]/0.786;
	      double var_b=C[a+4][b+4][c+2]-0.834;
	    }

    return 0;
}