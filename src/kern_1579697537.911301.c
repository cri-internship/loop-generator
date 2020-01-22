#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(910, 700, 360, "zeros");
	float **C = create_two_dim_float(640, 530, "zeros");
	float *D = create_one_dim_float(500, "zeros");
	float *B = create_one_dim_float(460, "zeros");

	for (int d = 2; d < 530; d++)
	  for (int c = 4; c < 500; c++)
	    for (int b = 4; b < 500; b++)
	      for (int a = 4; a < 500; a++)
	      {
	        
	       C[a][b]=C[a-4][b-2]*D[a]-A[a][b][c];
	        
	       float var_a=D[a]+0.769;
	       float var_b=D[a-1]+0.556;
	      }

    return 0;
}