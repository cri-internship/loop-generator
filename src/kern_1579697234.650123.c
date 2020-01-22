#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(930, 970, "zeros");
	float **B = create_two_dim_float(320, 110, "zeros");
	float ***A = create_three_dim_float(870, 860, 990, "zeros");
	float ***C = create_three_dim_float(290, 880, 480, "zeros");
	float **E = create_two_dim_float(910, 170, "zeros");

	for (int d = 5; d < 110; d++)
	  for (int c = 0; c < 320; c++)
	    for (int b = 0; b < 320; b++)
	      for (int a = 0; a < 320; a++)
	      {
	        
	       D[a][b]=D[a+5][b+4]/0.342;
	        
	       E[a][b]=E[a][b+2]+0.057;
	        
	       B[a][b]=0.487;
	       B[a][b-5]=0.771;
	      }

    return 0;
}