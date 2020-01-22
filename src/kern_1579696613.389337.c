#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(760, "ones");
	float **A = create_two_dim_float(920, 460, "ones");
	float ***D = create_three_dim_float(420, 860, 330, "ones");
	float ***B = create_three_dim_float(490, 560, 130, "ones");
	float **C = create_two_dim_float(830, 870, "ones");

	for (int d = 4; d < 127; d++)
	  for (int c = 3; c < 559; c++)
	    for (int b = 4; b < 419; b++)
	      for (int a = 4; a < 419; a++)
	      {
	        
	       D[a][b][c]=D[a-3][b-1][c-4]-C[a][b];
	        
	       E[a]=E[a-3]-A[a][b]+B[a][b][c]/D[a][b][c]*0.453;
	        
	       C[a][b]=C[a-4][b-3]*0.0;
	        
	       B[a][b][c]=B[a+2][b+1][c+3]/E[a]+E[a]*A[a][b]-D[a][b][c];
	        
	       C[a][b]=C[a+1][b+5]*E[a];
	        
	       D[a][b][c]=D[a+1][b][c+3]+E[a]*C[a][b]-B[a][b][c]/A[a][b];
	      }

    return 0;
}