#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(570, "random");
	float ***B = create_three_dim_float(270, 880, 460, "random");
	float **C = create_two_dim_float(590, 520, "random");

	for (int d = 1; d < 457; d++)
	  for (int c = 3; c < 516; c++)
	    for (int b = 4; b < 265; b++)
	      for (int a = 4; a < 265; a++)
	      {
	        
	       A[a]=A[a-4]/C[a][b]*B[a][b][c];
	        
	       B[a][b][c]=B[a-2][b][c-1]+0.454;
	        
	       B[a][b][c]=B[a+4][b][c+3]+A[a]-C[a][b];
	        
	       B[a][b][c]=B[a+5][b+4][c+1]-A[a];
	        
	       float var_a=C[a][b]-0.059;
	       float var_b=C[a+1][b+4]+0.387;
	      }

    return 0;
}