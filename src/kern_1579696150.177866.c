#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(690, 210, "zeros");
	double *A = create_one_dim_double(620, "zeros");
	double ***C = create_three_dim_double(680, 660, 290, "zeros");

	for (int c = 4; c < 290; c++)
	  for (int b = 2; b < 210; b++)
	    for (int a = 3; a < 680; a++)
	    {
	      
	      B[a][b]=B[a+1][b]*C[a][b][c];
	      
	      C[a][b][c]=0.815;
	      C[a-2][b-2][c-4]=B[a][b];
	      
	      double var_a=C[a][b][c]-0.849;
	      double var_b=C[a-3][b][c-2]+0.421;
	    }

    return 0;
}