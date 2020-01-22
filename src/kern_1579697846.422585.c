#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(270, 370, 500, "zeros");
	float **E = create_two_dim_float(330, 460, "zeros");
	float ***B = create_three_dim_float(890, 740, 230, "zeros");
	float ***A = create_three_dim_float(290, 200, 200, "zeros");
	float *D = create_one_dim_float(470, "zeros");

	for (int d = 0; d < 456; d++)
	  for (int c = 1; c < 326; c++)
	    for (int b = 1; b < 326; b++)
	      for (int a = 1; a < 326; a++)
	      {
	        
	       D[a]=D[a-1]*0.616;
	        
	       E[a][b]=E[a+4][b+4]/0.118;
	        
	       float var_a=E[a][b]/0.944;
	       float var_b=E[a+1][b+4]*0.589;
	      }

    return 0;
}