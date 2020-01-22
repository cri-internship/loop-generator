#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(220, 300, "random");
	float *B = create_one_dim_float(920, "random");
	float **D = create_two_dim_float(410, 80, "random");
	float *C = create_one_dim_float(200, "random");
	float ***E = create_three_dim_float(900, 630, 1000, "random");

	for (int d = 2; d < 80; d++)
	  for (int c = 4; c < 198; c++)
	    for (int b = 4; b < 198; b++)
	      for (int a = 4; a < 198; a++)
	      {
	        
	       B[a]=B[a+4]+0.242;
	        
	       D[a][b]=0.502;
	       D[a-4][b-2]=0.923;
	        
	       C[a]=0.227;
	       C[a+2]=0.928;
	      }

    return 0;
}