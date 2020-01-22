#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(410, "ones");
	double ***E = create_three_dim_double(70, 220, 690, "ones");
	double **B = create_two_dim_double(560, 510, "ones");
	double ***C = create_three_dim_double(590, 790, 890, "ones");
	double ***D = create_three_dim_double(550, 890, 310, "ones");

	for (int c = 5; c < 310; c++)
	  for (int b = 4; b < 220; b++)
	    for (int a = 4; a < 70; a++)
	    {
	      
	      E[a][b][c]=E[a-3][b-3][c-5]-0.632;
	      
	      D[a][b][c]=D[a-4][b-3][c-3]-A[a]/C[a][b][c]+E[a][b][c]*B[a][b];
	      
	      C[a][b][c]=C[a][b+4][c+4]*D[a][b][c]+B[a][b]-0.236;
	      
	      A[a]=D[a][b][c]-B[a][b]*E[a][b][c];
	      A[a-1]=C[a][b][c]-B[a][b]+E[a][b][c];
	      
	      C[a][b][c]=0.752;
	      
	      double var_a=A[a]*0.438;
	      double var_b=A[a]-0.051;
	    }

    return 0;
}