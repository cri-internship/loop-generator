#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(870, 560, "ones");
	double ***E = create_three_dim_double(680, 800, 590, "ones");
	double *D = create_one_dim_double(280, "ones");
	double *C = create_one_dim_double(900, "ones");
	double ***A = create_three_dim_double(590, 900, 500, "ones");

	for (int d = 2; d < 500; d++)
	  for (int c = 2; c < 800; c++)
	    for (int b = 4; b < 279; b++)
	      for (int a = 4; a < 279; a++)
	      {
	        
	       A[a][b][c]=A[a-4][b-2][c-2]+D[a]*E[a][b][c]-B[a][b];
	        
	       E[a][b][c]=E[a-4][b-1][c-2]-C[a]/A[a][b][c]*B[a][b];
	        
	       A[a][b][c]=D[a]/C[a]*B[a][b]-E[a][b][c];
	        
	       C[a]=D[a]-E[a][b][c]+B[a][b]*A[a][b][c];
	       C[a]=D[a]*A[a][b][c];
	        
	       double var_a=D[a]+0.386;
	       double var_b=D[a+1]/0.385;
	      }

    return 0;
}