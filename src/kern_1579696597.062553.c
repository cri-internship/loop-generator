#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(970, 160, "random");
	float ***D = create_three_dim_float(350, 140, 280, "random");
	float **B = create_two_dim_float(760, 880, "random");
	float *A = create_one_dim_float(460, "random");

	for (int d = 1; d < 275; d++)
	  for (int c = 1; c < 138; c++)
	    for (int b = 3; b < 348; b++)
	      for (int a = 3; a < 348; a++)
	      {
	        
	       D[a][b][c]=D[a][b-1][c-1]-B[a][b]/C[a][b]*0.686;
	        
	       C[a][b]=D[a][b][c]*B[a][b];
	       C[a+5][b]=B[a][b]*D[a][b][c];
	        
	       B[a][b]=A[a]/D[a][b][c];
	       B[a+4][b+3]=A[a]-C[a][b];
	        
	       C[a][b]=0.064;
	        
	       float var_a=D[a][b][c]*0.393;
	       float var_b=D[a+2][b+2][c+5]-0.146;
	      }

    return 0;
}