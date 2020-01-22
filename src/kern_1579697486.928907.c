#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(450, 410, "ones");
	float *A = create_one_dim_float(290, "ones");
	float *D = create_one_dim_float(710, "ones");
	float **B = create_two_dim_float(850, 800, "ones");
	float ***E = create_three_dim_float(830, 420, 150, "ones");

	for (int d = 0; d < 410; d++)
	  for (int c = 0; c < 448; c++)
	    for (int b = 0; b < 448; b++)
	      for (int a = 0; a < 448; a++)
	      {
	        
	       C[a][b]=C[a+2][b]*0.5;
	      }

    return 0;
}