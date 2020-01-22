#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(620, 90, 370, "zeros");
	float **C = create_two_dim_float(880, 60, "zeros");
	float ***B = create_three_dim_float(930, 800, 720, "zeros");
	float *A = create_one_dim_float(620, "zeros");

	for (int d = 3; d < 370; d++)
	  for (int c = 4; c < 60; c++)
	    for (int b = 5; b < 620; b++)
	      for (int a = 5; a < 620; a++)
	      {
	        
	       C[a][b]=0.644;
	       C[a][b-3]=0.511;
	        
	       float var_a=D[a][b][c]+0.217;
	       float var_b=D[a-5][b-4][c-3]/0.635;
	      }

    return 0;
}