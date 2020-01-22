#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(960, 880, 160, "zeros");
	float *B = create_one_dim_float(340, "zeros");

	for (int d = 4; d < 155; d++)
	  for (int c = 4; c < 875; c++)
	    for (int b = 5; b < 337; b++)
	      for (int a = 5; a < 337; a++)
	      {
	        
	       B[a]=B[a-5]-0.554;
	        
	       A[a][b][c]=A[a-1][b-4][c-1]/B[a];
	        
	       B[a]=B[a-3]-0.499;
	        
	       A[a][b][c]=A[a+1][b+4][c+1]*0.941;
	        
	       A[a][b][c]=A[a][b+5][c+5]-0.467;
	        
	       float var_a=A[a][b][c]/0.225;
	       float var_b=A[a][b][c-4]*0.881;
	      }

    return 0;
}