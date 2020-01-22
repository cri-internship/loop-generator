#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(560, 290, "random");
	float **B = create_two_dim_float(510, 960, "random");
	float **D = create_two_dim_float(540, 800, "random");
	float **E = create_two_dim_float(70, 850, "random");
	float *A = create_one_dim_float(860, "random");

	for (int d = 4; d < 849; d++)
	  for (int c = 5; c < 65; c++)
	    for (int b = 5; b < 65; b++)
	      for (int a = 5; a < 65; a++)
	      {
	        
	       B[a][b]=B[a-3][b-4]/0.754;
	        
	       E[a][b]=E[a+5][b+1]/0.174;
	        
	       E[a][b]=0.89;
	        
	       float var_a=E[a][b]-0.981;
	       float var_b=E[a-5][b-1]*0.114;
	      }

    return 0;
}