#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(330, 540, 920, "ones");
	double *D = create_one_dim_double(360, "ones");
	double *C = create_one_dim_double(180, "ones");
	double ***A = create_three_dim_double(590, 790, 550, "ones");

	for (int d = 5; d < 547; d++)
	  for (int c = 5; c < 785; c++)
	    for (int b = 5; b < 176; b++)
	      for (int a = 5; a < 176; a++)
	      {
	        
	       A[a][b][c]=A[a-4][b-5][c-5]*0.477;
	        
	       D[a]=D[a+3]/A[a][b][c]+0.442-A[a][b][c];
	        
	       A[a][b][c]=A[a+1][b+3][c]*D[a]-B[a][b][c];
	        
	       D[a]=D[a+2]*0.715;
	        
	       C[a]=0.268;
	       C[a+4]=0.91;
	        
	       double var_a=D[a]+0.153;
	       double var_b=D[a-5]/0.345;
	      }

    return 0;
}