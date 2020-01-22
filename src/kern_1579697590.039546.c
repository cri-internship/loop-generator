#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(470, 950, "random");
	float ***B = create_three_dim_float(780, 240, 830, "random");

	for (int d = 5; d < 827; d++)
	  for (int c = 2; c < 238; c++)
	    for (int b = 4; b < 466; b++)
	      for (int a = 4; a < 466; a++)
	      {
	        
	       A[a][b]=A[a+2][b+1]-0.042;
	        
	       B[a][b][c]=0.384;
	       B[a][b+2][c+1]=0.823;
	        
	       B[a][b][c]=0.415;
	        
	       A[a][b]=A[a][b]/0.571;
	       B[a][b][c]=A[a+4][b+5]/0.238;
	        
	       float var_a=B[a][b][c]-0.561;
	       float var_b=B[a+2][b][c+3]/0.281;
	        
	       float var_c=B[a][b][c]/0.475;
	       float var_d=B[a-4][b-2][c-1]/0.566;
	      }

    return 0;
}