#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(750, "ones");
	float *C = create_one_dim_float(990, "ones");
	float **B = create_two_dim_float(930, 150, "ones");
	float **A = create_two_dim_float(820, 120, "ones");
	float *D = create_one_dim_float(270, "ones");

	for (int d = 0; d < 120; d++)
	  for (int c = 0; c < 747; c++)
	    for (int b = 0; b < 747; b++)
	      for (int a = 0; a < 747; a++)
	      {
	        
	       A[a][b]=A[a+3][b]+0.104;
	        
	       E[a]=E[a+3]/A[a][b]*D[a]-B[a][b];
	        
	       B[a][b]=B[a+3][b]+0.966;
	        
	       float var_a=E[a]*0.231;
	      }

    return 0;
}