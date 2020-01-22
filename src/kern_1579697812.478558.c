#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(20, 170, 260, "random");
	double **B = create_two_dim_double(710, 400, "random");
	double **A = create_two_dim_double(230, 60, "random");

	for (int d = 0; d < 257; d++)
	  for (int c = 3; c < 165; c++)
	    for (int b = 2; b < 15; b++)
	      for (int a = 2; a < 15; a++)
	      {
	        
	       B[a][b]=B[a-2][b-3]-C[a][b][c];
	        
	       C[a][b][c]=0.124;
	       C[a+1][b+5][c+3]=0.862;
	        
	       double var_a=C[a][b][c]+0.67;
	       double var_b=C[a+5][b][c+1]-0.073;
	      }

    return 0;
}