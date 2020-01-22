#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(210, 270, 860, "ones");
	float *B = create_one_dim_float(460, "ones");
	float **A = create_two_dim_float(670, 230, "ones");
	float *D = create_one_dim_float(80, "ones");

	for (int d = 4; d < 856; d++)
	  for (int c = 5; c < 230; c++)
	    for (int b = 5; b < 206; b++)
	      for (int a = 5; a < 206; a++)
	      {
	        
	       A[a][b]=A[a-5][b-5]+0.878;
	        
	       C[a][b][c]=C[a+1][b+4][c+3]/0.383;
	        
	       C[a][b][c]=C[a+4][b+5][c+4]+0.398;
	        
	       C[a][b][c]=C[a][b][c]/A[a][b]*B[a]-D[a];
	       B[a]=C[a+2][b][c+2]+0.784;
	        
	       float var_a=C[a][b][c]*0.871;
	       float var_b=C[a][b+3][c]*0.791;
	      }

    return 0;
}