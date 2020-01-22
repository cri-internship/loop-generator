#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(700, 50, 440, "random");
	float **B = create_two_dim_float(810, 740, "random");
	float ***A = create_three_dim_float(530, 1000, 930, "random");

	for (int d = 4; d < 930; d++)
	  for (int c = 3; c < 1000; c++)
	    for (int b = 3; b < 530; b++)
	      for (int a = 3; a < 530; a++)
	      {
	        
	       A[a][b][c]=A[a-3][b-3][c-4]+0.383;
	      }

    return 0;
}