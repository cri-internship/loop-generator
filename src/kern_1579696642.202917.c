#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(920, "zeros");
	double ***C = create_three_dim_double(480, 940, 360, "zeros");
	double ***B = create_three_dim_double(130, 690, 900, "zeros");

	for (int d = 0; d < 355; d++)
	  for (int c = 0; c < 685; c++)
	    for (int b = 3; b < 129; b++)
	      for (int a = 3; a < 129; a++)
	      {
	        
	       A[a]=A[a-3]+0.998;
	        
	       B[a][b][c]=B[a+1][b+5][c+3]-A[a]+C[a][b][c];
	        
	       double var_a=A[a]/0.558;
	       A[a]=0.365;
	        
	       C[a][b][c]=C[a+1][b+4][c+4]+0.504;
	        
	       C[a][b][c]=0.051;
	        
	       A[a]=A[a]-C[a][b][c];
	      }

    return 0;
}