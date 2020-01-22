#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(230, "zeros");
	float ***A = create_three_dim_float(710, 880, 80, "zeros");
	float **E = create_two_dim_float(620, 970, "zeros");
	float *D = create_one_dim_float(950, "zeros");
	float **C = create_two_dim_float(750, 520, "zeros");

	for (int d = 0; d < 77; d++)
	  for (int c = 3; c < 520; c++)
	    for (int b = 4; b < 230; b++)
	      for (int a = 4; a < 230; a++)
	      {
	        
	       E[a][b]=E[a-4][b-3]-0.528;
	        
	       B[a]=B[a-3]+C[a][b];
	        
	       A[a][b][c]=A[a+4][b+2][c+3]*E[a][b]-0.034/B[a];
	        
	       C[a][b]=A[a][b][c];
	       C[a-2][b-3]=B[a]/0.513*A[a][b][c]+D[a];
	        
	       float var_a=B[a]*0.81;
	       float var_b=B[a-1]+0.686;
	        
	       C[a][b]=D[a]*E[a][b];
	       E[a][b]=D[a-1]-A[a][b][c]/0.824;
	      }

    return 0;
}