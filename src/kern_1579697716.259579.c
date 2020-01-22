#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(660, "zeros");
	float ***B = create_three_dim_float(640, 350, 570, "zeros");
	float **C = create_two_dim_float(960, 510, "zeros");

	for (int d = 3; d < 570; d++)
	  for (int c = 4; c < 350; c++)
	    for (int b = 2; b < 640; b++)
	      for (int a = 2; a < 640; a++)
	      {
	        
	       C[a][b]=C[a-2][b-4]-0.104;
	        
	       B[a][b][c]=A[a];
	       B[a][b][c-3]=C[a][b]/A[a];
	      }

    return 0;
}