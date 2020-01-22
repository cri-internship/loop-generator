#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(120, 730, 230, "ones");
	double *A = create_one_dim_double(110, "ones");
	double ***C = create_three_dim_double(920, 400, 480, "ones");
	double **B = create_two_dim_double(30, 270, "ones");

	for (int d = 4; d < 225; d++)
	  for (int c = 5; c < 270; c++)
	    for (int b = 4; b < 30; b++)
	      for (int a = 4; a < 30; a++)
	      {
	        
	       D[a][b][c]=D[a-4][b-1][c-4]*0.971;
	        
	       D[a][b][c]=D[a+5][b][c+5]/C[a][b][c]-A[a]*0.212;
	        
	       double var_a=B[a][b]/0.708;
	       double var_b=B[a-2][b-5]*0.447;
	      }

    return 0;
}