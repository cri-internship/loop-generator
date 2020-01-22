#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(660, "zeros");
	float ***C = create_three_dim_float(270, 930, 110, "zeros");
	float *D = create_one_dim_float(210, "zeros");
	float ***E = create_three_dim_float(690, 890, 770, "zeros");
	float *B = create_one_dim_float(360, "zeros");

	for (int d = 1; d < 106; d++)
	  for (int c = 5; c < 889; c++)
	    for (int b = 4; b < 210; b++)
	      for (int a = 4; a < 210; a++)
	      {
	        
	       E[a][b][c]=E[a-2][b-5][c-1]-0.416;
	        
	       E[a][b][c]=E[a+4][b+1][c+3]-0.014;
	        
	       C[a][b][c]=C[a+4][b+1][c+4]+0.579;
	        
	       D[a]=0.025;
	       D[a]=0.433;
	        
	       D[a]=B[a]-D[a]/E[a][b][c]*A[a];
	       E[a][b][c]=B[a-4]-C[a][b][c]*E[a][b][c]/A[a];
	      }

    return 0;
}