#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(90, "zeros");
	double **A = create_two_dim_double(850, 900, "zeros");
	double ***C = create_three_dim_double(340, 490, 680, "zeros");
	double **B = create_two_dim_double(210, 860, "zeros");

	for (int c = 0; c < 899; c++)
	  for (int b = 4; b < 90; b++)
	    for (int a = 4; a < 90; a++)
	    {
	      
	      D[a]=D[a-3]-0.078;
	      
	      A[a][b]=A[a-1][b]*C[a][b][c]-D[a];
	      
	      D[a]=A[a][b];
	      
	      double var_a=A[a][b]+0.403;
	      double var_b=A[a+5][b+1]/0.585;
	    }

    return 0;
}