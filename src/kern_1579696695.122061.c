#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(760, "zeros");
	float **C = create_two_dim_float(930, 330, "zeros");
	float ***B = create_three_dim_float(620, 490, 980, "zeros");

	for (int d = 3; d < 978; d++)
	  for (int c = 3; c < 329; c++)
	    for (int b = 4; b < 615; b++)
	      for (int a = 4; a < 615; a++)
	      {
	        
	       C[a][b]=C[a-3][b-3]-0.062;
	        
	       B[a][b][c]=B[a][b-3][c-3]-C[a][b]/A[a];
	        
	       C[a][b]=C[a+1][b+1]+0.014;
	        
	       A[a]=B[a][b][c]*0.157;
	       A[a+2]=C[a][b];
	        
	       A[a]=B[a][b][c]+A[a];
	       C[a][b]=B[a+5][b+2][c+2]-0.105;
	        
	       float var_a=B[a][b][c]/0.299;
	       float var_b=B[a+3][b+1][c+2]/0.59;
	        
	       float var_c=C[a][b]/0.787;
	       float var_d=C[a-4][b-1]*0.869;
	      }

    return 0;
}