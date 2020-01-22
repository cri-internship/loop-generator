#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(570, "ones");
	float ***A = create_three_dim_float(660, 800, 80, "ones");

	for (int d = 5; d < 80; d++)
	  for (int c = 2; c < 800; c++)
	    for (int b = 4; b < 567; b++)
	      for (int a = 4; a < 567; a++)
	      {
	        
	       B[a]=A[a][b][c];
	       A[a][b][c]=B[a]-0.456;
	        
	       B[a]=B[a-1]-A[a][b][c];
	        
	       A[a][b][c]=A[a-4][b-2][c-5]/B[a];
	        
	       B[a]=A[a][b][c]-B[a];
	       A[a][b][c]=A[a][b-2][c-5]*0.832;
	        
	       float var_a=B[a]/0.166;
	       float var_b=B[a-4]+0.807;
	      }

    return 0;
}