#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(790, "ones");
	float ***D = create_three_dim_float(940, 960, 710, "ones");
	float *B = create_one_dim_float(300, "ones");
	float **E = create_two_dim_float(480, 290, "ones");
	float **A = create_two_dim_float(40, 560, "ones");

	for (int d = 0; d < 555; d++)
	  for (int c = 5; c < 35; c++)
	    for (int b = 5; b < 35; b++)
	      for (int a = 5; a < 35; a++)
	      {
	        
	       A[a][b]=0.849;
	       A[a+5][b+5]=0.547;
	        
	       B[a]=0.055;
	       B[a-5]=0.091;
	      }

    return 0;
}