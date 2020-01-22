#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(830, 750, 800, "zeros");
	float **B = create_two_dim_float(70, 340, "zeros");
	float **A = create_two_dim_float(720, 310, "zeros");
	float ***D = create_three_dim_float(470, 520, 320, "zeros");
	float ***E = create_three_dim_float(950, 450, 590, "zeros");

	for (int d = 0; d < 798; d++)
	  for (int c = 0; c < 749; c++)
	    for (int b = 0; b < 828; b++)
	      for (int a = 0; a < 828; a++)
	      {
	        
	       C[a][b][c]=C[a+2][b+1][c+2]/0.073;
	      }

    return 0;
}