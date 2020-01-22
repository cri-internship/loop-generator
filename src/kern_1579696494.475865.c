#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **E = create_two_dim_float(120, 860, "random");
	float *B = create_one_dim_float(780, "random");
	float ***D = create_three_dim_float(550, 620, 20, "random");
	float **A = create_two_dim_float(900, 150, "random");
	float ***C = create_three_dim_float(510, 190, 850, "random");

	for (int d = 4; d < 850; d++)
	  for (int c = 4; c < 149; c++)
	    for (int b = 4; b < 120; b++)
	      for (int a = 4; a < 120; a++)
	      {
	        
	       B[a]=B[a+1]+0.381;
	        
	       C[a][b][c]=0.59;
	       C[a][b-2][c-4]=B[a]*D[a][b][c]-0.931;
	        
	       A[a][b]=C[a][b][c]+C[a][b][c]/B[a]-D[a][b][c];
	       A[a-1][b-4]=E[a][b]/B[a];
	        
	       B[a]=E[a][b]/B[a]-C[a][b][c];
	       A[a][b]=E[a-4][b-2]-D[a][b][c];
	        
	       float var_a=A[a][b]+0.353;
	       float var_b=A[a+2][b+1]*0.668;
	      }

    return 0;
}