#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(450, "ones");
	float **A = create_two_dim_float(180, 670, "ones");
	float *E = create_one_dim_float(70, "ones");
	float **D = create_two_dim_float(460, 240, "ones");
	float ***B = create_three_dim_float(450, 350, 980, "ones");

	for (int d = 0; d < 979; d++)
	  for (int c = 5; c < 240; c++)
	    for (int b = 3; b < 68; b++)
	      for (int a = 3; a < 68; a++)
	      {
	        
	       D[a][b]=D[a][b-2]/0.064;
	        
	       B[a][b][c]=B[a][b+3][c+1]+0.227;
	        
	       D[a][b]=0.581;
	        
	       E[a]=0.533;
	       E[a+2]=0.872;
	        
	       float var_a=D[a][b]*0.788;
	       float var_b=D[a-3][b-4]+0.613;
	      }

    return 0;
}