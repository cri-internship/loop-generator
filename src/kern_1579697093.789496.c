#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(1000, "zeros");
	double ***B = create_three_dim_double(160, 90, 370, "zeros");
	double **C = create_two_dim_double(250, 670, "zeros");

	for (int d = 4; d < 370; d++)
	  for (int c = 2; c < 90; c++)
	    for (int b = 4; b < 160; b++)
	      for (int a = 4; a < 160; a++)
	      {
	        
	       B[a][b][c]=B[a-1][b-2][c-4]*0.118;
	        
	       A[a]=A[a+3]-B[a][b][c]/0.386;
	        
	       C[a][b]=A[a];
	       C[a-4][b]=0.561/A[a];
	        
	       C[a][b]=B[a][b][c];
	        
	       double var_a=C[a][b]-0.261;
	       double var_b=C[a][b+1]/0.594;
	      }

    return 0;
}