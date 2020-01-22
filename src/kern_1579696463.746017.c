#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(1000, "random");
	double ***A = create_three_dim_double(180, 820, 250, "random");

	for (int d = 3; d < 246; d++)
	  for (int c = 5; c < 818; c++)
	    for (int b = 3; b < 176; b++)
	      for (int a = 3; a < 176; a++)
	      {
	        
	       A[a][b][c]=A[a-1][b-5][c-1]+0.344;
	        
	       B[a]=B[a+1]+0.968;
	        
	       A[a][b][c]=A[a+1][b+1][c+4]-B[a];
	        
	       B[a]=0.712;
	        
	       double var_a=A[a][b][c]/0.92;
	       double var_b=A[a-2][b-4][c]/0.73;
	        
	       A[a][b][c]=A[a][b][c]-0.254;
	       B[a]=A[a-3][b-3][c-3]+B[a];
	      }

    return 0;
}