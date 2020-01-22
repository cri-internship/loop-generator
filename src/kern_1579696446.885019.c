#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(850, "zeros");
	float **A = create_two_dim_float(190, 550, "zeros");
	float **C = create_two_dim_float(160, 580, "zeros");
	float ***D = create_three_dim_float(530, 460, 760, "zeros");

	for (int d = 4; d < 579; d++)
	  for (int c = 5; c < 159; c++)
	    for (int b = 5; b < 159; b++)
	      for (int a = 5; a < 159; a++)
	      {
	        
	       C[a][b]=C[a-5][b-4]+B[a];
	        
	       float var_a=C[a][b]+0.293;
	       float var_b=C[a+1][b+1]/0.135;
	      }

    return 0;
}