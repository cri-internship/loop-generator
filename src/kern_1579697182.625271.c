#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(220, "ones");
	float ***B = create_three_dim_float(360, 340, 530, "ones");

	for (int d = 0; d < 528; d++)
	  for (int c = 0; c < 337; c++)
	    for (int b = 0; b < 358; b++)
	      for (int a = 0; a < 358; a++)
	      {
	        
	       B[a][b][c]=B[a+2][b+3][c+2]-0.896;
	      }

    return 0;
}