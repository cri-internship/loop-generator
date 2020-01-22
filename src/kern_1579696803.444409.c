#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(660, "ones");
	double ***D = create_three_dim_double(490, 410, 290, "ones");
	double ***E = create_three_dim_double(120, 20, 370, "ones");
	double **C = create_two_dim_double(160, 740, "ones");
	double **B = create_two_dim_double(450, 150, "ones");

	for (int c = 0; c < 368; c++)
	  for (int b = 1; b < 19; b++)
	    for (int a = 4; a < 117; a++)
	    {
	      
	      A[a]=A[a-4]-0.332;
	      
	      B[a][b]=B[a-2][b-1]+A[a]*D[a][b][c]-C[a][b];
	      
	      double var_a=C[a][b]+0.373;
	      C[a][b]=0.259;
	      
	      E[a][b][c]=B[a][b]+D[a][b][c]/C[a][b]-A[a];
	      E[a+3][b+1][c+2]=D[a][b][c]+0.766;
	      
	      D[a][b][c]=A[a]+E[a][b][c]*E[a][b][c];
	      C[a][b]=A[a-1]+C[a][b];
	    }

    return 0;
}