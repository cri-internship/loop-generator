#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(380, 630, "random");
	float ***A = create_three_dim_float(1000, 30, 30, "random");
	float **C = create_two_dim_float(950, 690, "random");
	float ***D = create_three_dim_float(120, 420, 470, "random");

	for (int d = 1; d < 27; d++)
	  for (int c = 4; c < 30; c++)
	    for (int b = 4; b < 120; b++)
	      for (int a = 4; a < 120; a++)
	      {
	        
	       B[a][b]=B[a+3][b+1]-0.71;
	        
	       B[a][b]=0.524;
	        
	       C[a][b]=B[a][b];
	       C[a+2][b]=0.827-A[a][b][c];
	        
	       float var_a=A[a][b][c]*0.503;
	       float var_b=A[a+2][b][c+3]*0.563;
	        
	       A[a][b][c]=D[a][b][c]*C[a][b]-B[a][b];
	       D[a][b][c]=D[a][b-3][c-1]-B[a][b];
	        
	       C[a][b]=A[a][b][c]/0.716-C[a][b]+D[a][b][c];
	       B[a][b]=A[a-4][b-4][c]+0.989*D[a][b][c];
	      }

    return 0;
}