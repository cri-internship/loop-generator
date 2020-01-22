#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(640, 790, "ones");
	float **B = create_two_dim_float(890, 800, "ones");
	float *C = create_one_dim_float(250, "ones");
	float **D = create_two_dim_float(110, 810, "ones");

	for (int d = 0; d < 795; d++)
	  for (int c = 0; c < 885; c++)
	    for (int b = 0; b < 885; b++)
	      for (int a = 0; a < 885; a++)
	      {
	        
	       B[a][b]=0.654;
	       B[a+5][b+5]=0.212;
	      }

    return 0;
}