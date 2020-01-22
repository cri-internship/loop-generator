#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(80, 140, 460, "random");
	float ***A = create_three_dim_float(160, 590, 440, "random");

	for (int d = 4; d < 435; d++)
	  for (int c = 5; c < 139; c++)
	    for (int b = 4; b < 75; b++)
	      for (int a = 4; a < 75; a++)
	      {
	        
	       B[a][b][c]=B[a][b-5][c-4]*0.077;
	        
	       B[a][b][c]=B[a+5][b+1][c+5]+A[a][b][c];
	        
	       float var_a=A[a][b][c]*0.237;
	       float var_b=A[a][b+4][c+5]*0.881;
	      }

    return 0;
}