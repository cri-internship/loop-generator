#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(930, 390, 340, "zeros");
	float ***C = create_three_dim_float(320, 870, 300, "zeros");
	float ***D = create_three_dim_float(60, 1000, 740, "zeros");
	float *B = create_one_dim_float(610, "zeros");

	for (int d = 1; d < 340; d++)
	  for (int c = 1; c < 390; c++)
	    for (int b = 3; b < 930; b++)
	      for (int a = 3; a < 930; a++)
	      {
	        
	       A[a][b][c]=A[a-3][b-1][c-1]-0.587;
	      }

    return 0;
}