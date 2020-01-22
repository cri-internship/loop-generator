#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(490, 590, 450, "ones");
	double **B = create_two_dim_double(700, 990, "ones");

	for (int c = 4; c < 450; c++)
	  for (int b = 4; b < 590; b++)
	    for (int a = 4; a < 490; a++)
	    {
	      
	      B[a][b]=B[a-4][b-4]*A[a][b][c];
	      
	      B[a][b]=B[a-1][b]/A[a][b][c];
	      
	      double var_a=A[a][b][c]/0.553;
	      double var_b=A[a-3][b-3][c-2]*0.58;
	      
	      A[a][b][c]=A[a][b][c]+B[a][b];
	      B[a][b]=A[a-1][b-4][c-4]*B[a][b];
	    }

    return 0;
}