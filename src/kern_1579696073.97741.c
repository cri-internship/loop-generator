#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(360, "random");
	float **E = create_two_dim_float(210, 240, "random");
	float ***B = create_three_dim_float(490, 400, 980, "random");
	float *D = create_one_dim_float(330, "random");
	float **A = create_two_dim_float(100, 140, "random");

	for (int d = 4; d < 140; d++)
	  for (int c = 4; c < 98; c++)
	    for (int b = 4; b < 98; b++)
	      for (int a = 4; a < 98; a++)
	      {
	        
	       A[a][b]=A[a-1][b-4]-0.614;
	        
	       C[a]=C[a-4]/B[a][b][c]+D[a];
	        
	       A[a][b]=A[a+2][b]/0.177;
	      }

    return 0;
}