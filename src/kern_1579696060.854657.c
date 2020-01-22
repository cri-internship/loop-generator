#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(950, 890, "ones");
	double ***D = create_three_dim_double(560, 620, 300, "ones");
	double ***C = create_three_dim_double(520, 520, 80, "ones");
	double *A = create_one_dim_double(310, "ones");

	for (int c = 3; c < 76; c++)
	  for (int b = 2; b < 519; b++)
	    for (int a = 5; a < 310; a++)
	    {
	      
	      D[a][b][c]=D[a-2][b-2][c-3]*A[a]+C[a][b][c];
	      
	      D[a][b][c]=D[a+3][b+1][c]/0.925;
	      
	      C[a][b][c]=0.862;
	      C[a+3][b+1][c+4]=0.252;
	      
	      A[a]=0.464;
	      A[a-5]=0.564;
	    }

    return 0;
}