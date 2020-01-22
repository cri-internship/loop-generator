#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(750, 370, "ones");
	double ***B = create_three_dim_double(270, 610, 50, "ones");

	for (int d = 1; d < 50; d++)
	  for (int c = 5; c < 368; c++)
	    for (int b = 4; b < 270; b++)
	      for (int a = 4; a < 270; a++)
	      {
	        
	       A[a][b]=A[a+1][b+2]+0.403;
	        
	       A[a][b]=A[a][b+2]/0.599;
	        
	       B[a][b][c]=A[a][b];
	       B[a-4][b-5][c-1]=A[a][b];
	        
	       double var_a=A[a][b]/0.899;
	       double var_b=A[a-2][b-4]/0.951;
	      }

    return 0;
}