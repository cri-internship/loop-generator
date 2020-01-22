#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(70, "ones");
	double **B = create_two_dim_double(790, 70, "ones");
	double **A = create_two_dim_double(860, 120, "ones");
	double ***C = create_three_dim_double(650, 150, 110, "ones");

	for (int c = 0; c < 66; c++)
	  for (int b = 4; b < 65; b++)
	    for (int a = 4; a < 65; a++)
	    {
	      
	      D[a]=0.859;
	      float  var_a=D[a]*0.356;
	      
	      D[a]=D[a-4]/0.513;
	      
	      D[a]=D[a+5]-B[a][b]+C[a][b][c];
	      
	      A[a][b]=D[a]+D[a]*B[a][b];
	      A[a+3][b]=D[a];
	      
	      double var_b=B[a][b]*0.212;
	      double var_c=B[a+3][b+4]-0.59;
	      
	      D[a]=B[a][b]+A[a][b];
	      B[a][b]=B[a+5][b+4]*C[a][b][c]-A[a][b];
	    }

    return 0;
}