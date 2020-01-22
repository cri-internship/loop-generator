#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(420, 410, 790, "ones");
	double ***C = create_three_dim_double(910, 750, 490, "ones");
	double *A = create_one_dim_double(850, "ones");
	double ***D = create_three_dim_double(890, 490, 350, "ones");
	double **B = create_two_dim_double(870, 610, "ones");

	for (int c = 0; c < 349; c++)
	  for (int b = 4; b < 485; b++)
	    for (int a = 1; a < 850; a++)
	    {
	      
	      A[a]=A[a-1]+B[a][b];
	      
	      D[a][b][c]=D[a+2][b+5][c+1]+A[a]-E[a][b][c]*C[a][b][c];
	      
	      double var_a=A[a]*0.078;
	      
	      double var_c=C[a][b][c]-0.438;
	      double var_d=C[a-1][b-4][c]+0.668;
	    }

    return 0;
}