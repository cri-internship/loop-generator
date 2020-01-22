#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(970, 830, 320, "random");
	double *B = create_one_dim_double(150, "random");
	double **C = create_two_dim_double(590, 250, "random");

	for (int d = 1; d < 318; d++)
	  for (int c = 5; c < 250; c++)
	    for (int b = 2; b < 590; b++)
	      for (int a = 2; a < 590; a++)
	      {
	        
	       A[a][b][c]=A[a+1][b+5][c+2]*0.135;
	        
	       C[a][b]=0.258;
	       C[a-1][b-4]=0.02;
	        
	       A[a][b][c]=C[a][b]/B[a];
	      }

    return 0;
}