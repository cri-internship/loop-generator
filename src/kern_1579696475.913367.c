#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(270, 960, "ones");
	double ***A = create_three_dim_double(750, 530, 930, "ones");

	for (int d = 0; d < 925; d++)
	  for (int c = 0; c < 527; c++)
	    for (int b = 5; b < 267; b++)
	      for (int a = 5; a < 267; a++)
	      {
	        
	       double var_a=B[a][b]-0.968;
	       B[a][b]=0.245;
	        
	       A[a][b][c]=A[a+5][b+2][c+5]/0.892;
	        
	       B[a][b]=B[a+3][b+5]+0.55;
	        
	       A[a][b][c]=0.015;
	        
	       A[a][b][c]=B[a][b]*0.122;
	       B[a][b]=B[a+1][b+3]-A[a][b][c];
	      }

    return 0;
}