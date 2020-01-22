#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(940, 460, 170, "zeros");
	float *D = create_one_dim_float(770, "zeros");
	float **B = create_two_dim_float(10, 610, "zeros");
	float ***A = create_three_dim_float(300, 900, 280, "zeros");
	float ***C = create_three_dim_float(90, 360, 810, "zeros");

	for (int d = 0; d < 279; d++)
	  for (int c = 0; c < 899; c++)
	    for (int b = 0; b < 298; b++)
	      for (int a = 0; a < 298; a++)
	      {
	        
	       A[a][b][c]=A[a+2][b+1][c+1]+0.795;
	      }

    return 0;
}