#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(600, 100, 400, "ones");
	double **A = create_two_dim_double(740, 660, "ones");
	double **C = create_two_dim_double(380, 70, "ones");

	for (int d = 2; d < 396; d++)
	  for (int c = 4; c < 65; c++)
	    for (int b = 3; b < 376; b++)
	      for (int a = 3; a < 376; a++)
	      {
	        
	       B[a][b][c]=B[a-3][b-1][c-2]/0.992;
	        
	       A[a][b]=A[a-1][b-4]-C[a][b];
	        
	       C[a][b]=C[a-2][b-4]+0.106;
	        
	       C[a][b]=C[a+4][b+5]-0.859;
	        
	       C[a][b]=C[a+2][b+4]-A[a][b]/B[a][b][c];
	        
	       B[a][b][c]=B[a+2][b][c+4]+0.822;
	      }

    return 0;
}