#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(810, 680, 240, "random");
	float **B = create_two_dim_float(440, 530, "random");
	float *A = create_one_dim_float(300, "random");
	float ***D = create_three_dim_float(890, 480, 780, "random");

	for (int d = 0; d < 776; d++)
	  for (int c = 0; c < 475; c++)
	    for (int b = 0; b < 886; b++)
	      for (int a = 0; a < 886; a++)
	      {
	        
	       D[a][b][c]=D[a+4][b+5][c+1]-0.502;
	        
	       float var_a=D[a][b][c]+0.824;
	       float var_b=D[a+2][b+2][c+4]*0.125;
	      }

    return 0;
}