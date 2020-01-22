#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(770, "zeros");
	float ***C = create_three_dim_float(960, 830, 220, "zeros");
	float **B = create_two_dim_float(290, 860, "zeros");
	float ***A = create_three_dim_float(940, 150, 850, "zeros");
	float **D = create_two_dim_float(580, 370, "zeros");

	for (int d = 0; d < 215; d++)
	  for (int c = 0; c < 825; c++)
	    for (int b = 0; b < 766; b++)
	      for (int a = 0; a < 766; a++)
	      {
	        
	       C[a][b][c]=C[a+2][b+5][c+5]*0.809;
	        
	       E[a]=E[a+4]-0.505;
	      }

    return 0;
}