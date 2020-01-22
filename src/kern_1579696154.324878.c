#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(140, 540, 720, "ones");
	double **C = create_two_dim_double(460, 630, "ones");
	double ***A = create_three_dim_double(610, 720, 980, "ones");
	double **B = create_two_dim_double(260, 440, "ones");

	for (int d = 0; d < 720; d++)
	  for (int c = 3; c < 437; c++)
	    for (int b = 4; b < 140; b++)
	      for (int a = 4; a < 140; a++)
	      {
	        
	       D[a][b][c]=D[a-3][b-3][c]-C[a][b]/A[a][b][c]+B[a][b];
	        
	       B[a][b]=B[a-4][b-1]*D[a][b][c]-A[a][b][c]+D[a][b][c];
	        
	       B[a][b]=0.76*D[a][b][c];
	        
	       double var_a=B[a][b]*0.142;
	       double var_b=B[a-1][b-3]/0.565;
	      }

    return 0;
}