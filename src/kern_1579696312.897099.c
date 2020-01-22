#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(350, "random");
	float **A = create_two_dim_float(360, 660, "random");
	float ***C = create_three_dim_float(390, 940, 300, "random");

	for (int d = 0; d < 299; d++)
	  for (int c = 4; c < 660; c++)
	    for (int b = 4; b < 348; b++)
	      for (int a = 4; a < 348; a++)
	      {
	        
	       B[a]=B[a-4]-C[a][b][c]*0.003;
	        
	       A[a][b]=A[a-1][b-1]+0.309;
	        
	       A[a][b]=A[a-4][b-4]-0.855;
	        
	       B[a]=C[a][b][c];
	        
	       C[a][b][c]=0.954;
	       C[a+4][b+4][c+1]=0.89;
	        
	       float var_a=B[a]+0.639;
	       float var_b=B[a+2]*0.796;
	      }

    return 0;
}