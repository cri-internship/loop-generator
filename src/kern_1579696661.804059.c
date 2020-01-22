#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(640, "ones");
	double ***B = create_three_dim_double(590, 690, 350, "ones");

	for (int d = 0; d < 345; d++)
	  for (int c = 1; c < 688; c++)
	    for (int b = 4; b < 585; b++)
	      for (int a = 4; a < 585; a++)
	      {
	        
	       B[a][b][c]=B[a][b-1][c]-A[a];
	        
	       A[a]=A[a+3]-B[a][b][c];
	        
	       A[a]=A[a+4]-0.922;
	        
	       B[a][b][c]=A[a];
	        
	       A[a]=A[a]*B[a][b][c];
	       B[a][b][c]=A[a-4]/0.788;
	        
	       B[a][b][c]=B[a][b][c]/A[a];
	       B[a][b][c]=B[a+5][b][c]-A[a];
	        
	       double var_a=B[a][b][c]*0.064;
	       double var_b=B[a+2][b+1][c+4]-0.277;
	      }

    return 0;
}