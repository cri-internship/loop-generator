#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(140, "ones");
	float *A = create_one_dim_float(620, "ones");
	float *E = create_one_dim_float(430, "ones");
	float *C = create_one_dim_float(90, "ones");
	float ***B = create_three_dim_float(640, 740, 230, "ones");

	for (int d = 0; d < 87; d++)
	  for (int c = 0; c < 87; c++)
	    for (int b = 0; b < 87; b++)
	      for (int a = 0; a < 87; a++)
	      {
	        
	       D[a]=0.057;
	       float  var_a=D[a]*0.729;
	        
	       C[a]=A[a]+E[a]*B[a][b][c];
	       C[a+3]=D[a];
	      }

    return 0;
}