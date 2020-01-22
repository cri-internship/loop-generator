#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(520, "zeros");
	double ***B = create_three_dim_double(910, 660, 310, "zeros");

	for (int d = 0; d < 305; d++)
	  for (int c = 0; c < 657; c++)
	    for (int b = 3; b < 516; b++)
	      for (int a = 3; a < 516; a++)
	      {
	        
	       B[a][b][c]=B[a+4][b+3][c+3]+0.332;
	        
	       A[a]=A[a+4]+B[a][b][c];
	        
	       A[a]=0.147;
	        
	       double var_a=B[a][b][c]*0.477;
	       double var_b=B[a+2][b+1][c+5]-0.533;
	        
	       A[a]=B[a][b][c]-0.363;
	       B[a][b][c]=B[a-3][b][c]*A[a];
	      }

    return 0;
}