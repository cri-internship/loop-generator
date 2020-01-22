#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(730, 40, "ones");
	double ***C = create_three_dim_double(520, 170, 430, "ones");
	double ***B = create_three_dim_double(410, 400, 670, "ones");

	for (int d = 5; d < 670; d++)
	  for (int c = 5; c < 38; c++)
	    for (int b = 4; b < 410; b++)
	      for (int a = 4; a < 410; a++)
	      {
	        
	       B[a][b][c]=B[a-4][b-2][c-5]*0.214;
	        
	       B[a][b][c]=B[a-2][b-1][c-1]-0.665;
	        
	       A[a][b]=A[a+5][b+2]*0.226;
	        
	       double var_a=B[a][b][c]-0.344;
	       double var_b=B[a-3][b-5][c-3]*0.55;
	      }

    return 0;
}