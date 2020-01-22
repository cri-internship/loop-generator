#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(940, "random");
	float **A = create_two_dim_float(840, 990, "random");
	float ***B = create_three_dim_float(970, 320, 990, "random");

	for (int d = 0; d < 990; d++)
	  for (int c = 2; c < 320; c++)
	    for (int b = 5; b < 840; b++)
	      for (int a = 5; a < 840; a++)
	      {
	        
	       A[a][b]=A[a-1][b-2]-0.242;
	        
	       B[a][b][c]=0.783;
	       B[a-5][b][c]=0.917;
	      }

    return 0;
}