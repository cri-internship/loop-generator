#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(740, 600, 420, "random");
	float *B = create_one_dim_float(40, "random");
	float ***D = create_three_dim_float(640, 140, 510, "random");
	float **C = create_two_dim_float(800, 240, "random");

	for (int d = 0; d < 506; d++)
	  for (int c = 0; c < 136; c++)
	    for (int b = 0; b < 639; b++)
	      for (int a = 0; a < 639; a++)
	      {
	        
	       D[a][b][c]=0.313;
	       D[a+1][b+4][c+4]=0.105;
	        
	       C[a][b]=C[a][b]/D[a][b][c];
	       B[a]=C[a+2][b+4]/B[a];
	      }

    return 0;
}