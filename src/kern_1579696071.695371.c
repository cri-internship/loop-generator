#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(420, "random");
	float ***B = create_three_dim_float(690, 940, 340, "random");
	float *D = create_one_dim_float(400, "random");
	float ***A = create_three_dim_float(310, 340, 750, "random");

	for (int d = 5; d < 338; d++)
	  for (int c = 3; c < 340; c++)
	    for (int b = 4; b < 310; b++)
	      for (int a = 4; a < 310; a++)
	      {
	        
	       B[a][b][c]=B[a-1][b-1][c-5]+0.939;
	        
	       D[a]=D[a+1]-B[a][b][c]/0.931;
	        
	       B[a][b][c]=D[a]/A[a][b][c];
	        
	       float var_a=A[a][b][c]/0.976;
	       float var_b=A[a-2][b][c-4]-0.697;
	        
	       float var_c=D[a]-0.775;
	       float var_d=D[a+4]*0.74;
	      }

    return 0;
}