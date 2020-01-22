#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(150, 360, 260, "random");
	double *B = create_one_dim_double(500, "random");
	double *A = create_one_dim_double(400, "random");

	for (int d = 3; d < 260; d++)
	  for (int c = 4; c < 360; c++)
	    for (int b = 3; b < 150; b++)
	      for (int a = 3; a < 150; a++)
	      {
	        
	       C[a][b][c]=C[a-3][b-4][c-3]-0.337;
	        
	       double var_a=A[a]+0.349;
	       A[a]=0.316;
	        
	       B[a]=0.803-C[a][b][c];
	       B[a+3]=0.472/A[a];
	        
	       B[a]=C[a][b][c];
	        
	       double var_d=C[a][b][c]*0.715;
	       double var_e=C[a-2][b-1][c-1]-0.995;
	      }

    return 0;
}