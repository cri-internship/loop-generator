#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **E = create_two_dim_float(360, 280, "random");
	float ***A = create_three_dim_float(110, 330, 580, "random");
	float *C = create_one_dim_float(350, "random");
	float ***D = create_three_dim_float(670, 590, 680, "random");
	float ***B = create_three_dim_float(240, 500, 840, "random");

	for (int d = 3; d < 840; d++)
	  for (int c = 2; c < 280; c++)
	    for (int b = 4; b < 240; b++)
	      for (int a = 4; a < 240; a++)
	      {
	        
	       B[a][b][c]=B[a-2][b-2][c-3]-0.625;
	        
	       E[a][b]=0.796;
	       E[a][b-1]=0.217;
	        
	       float var_a=C[a]/0.134;
	       float var_b=C[a-4]+0.106;
	      }

    return 0;
}