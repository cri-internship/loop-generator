#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(150, 650, "ones");
	double **A = create_two_dim_double(680, 580, "ones");
	double **B = create_two_dim_double(180, 460, "ones");

	for (int d = 0; d < 460; d++)
	  for (int c = 4; c < 148; c++)
	    for (int b = 4; b < 148; b++)
	      for (int a = 4; a < 148; a++)
	      {
	        
	       A[a][b]=A[a-2][b]-0.328;
	        
	       C[a][b]=C[a+2][b]*0.24;
	        
	       C[a][b]=0.965;
	        
	       double var_a=B[a][b]-0.65;
	       double var_b=B[a-4][b]-0.577;
	      }

    return 0;
}