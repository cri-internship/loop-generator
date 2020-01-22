#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(780, 940, 70, "ones");
	double **A = create_two_dim_double(520, 630, "ones");

	for (int d = 4; d < 65; d++)
	  for (int c = 5; c < 629; c++)
	    for (int b = 4; b < 517; b++)
	      for (int a = 4; a < 517; a++)
	      {
	        
	       B[a][b][c]=B[a+4][b+2][c+3]/A[a][b];
	        
	       B[a][b][c]=0.059;
	        
	       double var_a=B[a][b][c]/0.505;
	       double var_b=B[a-4][b-5][c-4]*0.197;
	        
	       A[a][b]=A[a][b]+B[a][b][c];
	       B[a][b][c]=A[a+3][b+1]/B[a][b][c];
	      }

    return 0;
}