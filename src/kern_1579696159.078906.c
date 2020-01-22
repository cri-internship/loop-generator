#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(50, 790, "random");
	float ***A = create_three_dim_float(570, 180, 810, "random");

	for (int d = 1; d < 810; d++)
	  for (int c = 4; c < 180; c++)
	    for (int b = 4; b < 570; b++)
	      for (int a = 4; a < 570; a++)
	      {
	        
	       A[a][b][c]=B[a][b];
	       A[a-4][b-4][c-1]=0.641;
	      }

    return 0;
}