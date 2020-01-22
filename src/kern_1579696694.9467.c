#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(730, "zeros");
	float **C = create_two_dim_float(70, 300, "zeros");
	float ***B = create_three_dim_float(640, 600, 720, "zeros");
	float *A = create_one_dim_float(130, "zeros");
	float *E = create_one_dim_float(950, "zeros");

	for (int d = 0; d < 125; d++)
	  for (int c = 0; c < 125; c++)
	    for (int b = 0; b < 125; b++)
	      for (int a = 0; a < 125; a++)
	      {
	        
	       A[a]=0.215;
	       A[a]=0.536;
	      }

    return 0;
}