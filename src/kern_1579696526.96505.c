#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(320, "zeros");
	float **C = create_two_dim_float(110, 900, "zeros");
	float ***B = create_three_dim_float(180, 830, 970, "zeros");

	for (int d = 0; d < 897; d++)
	  for (int c = 3; c < 110; c++)
	    for (int b = 3; b < 110; b++)
	      for (int a = 3; a < 110; a++)
	      {
	        
	       A[a]=A[a-1]-0.011;
	        
	       C[a][b]=B[a][b][c]/A[a];
	       C[a][b+3]=B[a][b][c];
	        
	       A[a]=0.167;
	        
	       B[a][b][c]=A[a]-C[a][b]/B[a][b][c];
	       C[a][b]=A[a-3]+B[a][b][c]-C[a][b];
	      }

    return 0;
}