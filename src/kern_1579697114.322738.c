#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(610, 950, 730, "zeros");
	double ***A = create_three_dim_double(100, 670, 380, "zeros");
	double ***B = create_three_dim_double(1000, 220, 700, "zeros");
	double *E = create_one_dim_double(60, "zeros");
	double ***C = create_three_dim_double(150, 700, 920, "zeros");

	for (int c = 1; c < 380; c++)
	  for (int b = 1; b < 670; b++)
	    for (int a = 4; a < 56; a++)
	    {
	      
	      E[a]=E[a-3]+0.136;
	      
	      A[a][b][c]=A[a-3][b][c]*0.974;
	      
	      E[a]=E[a-1]*D[a][b][c]-B[a][b][c];
	      
	      D[a][b][c]=D[a+1][b][c]-C[a][b][c]+A[a][b][c]/0.32*B[a][b][c];
	      
	      E[a]=E[a+4]*0.886;
	      
	      B[a][b][c]=A[a][b][c]+E[a]*C[a][b][c]/D[a][b][c];
	      E[a]=A[a-1][b-1][c-1]+C[a][b][c]*0.364;
	      
	      double var_a=E[a]/0.523;
	      double var_b=E[a-4]/0.895;
	    }

    return 0;
}