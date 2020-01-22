#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(930, 770, 890, "zeros");
	float *C = create_one_dim_float(40, "zeros");
	float **E = create_two_dim_float(780, 800, "zeros");
	float *B = create_one_dim_float(580, "zeros");
	float ***D = create_three_dim_float(800, 870, 210, "zeros");

	for (int d = 0; d < 210; d++)
	  for (int c = 4; c < 870; c++)
	    for (int b = 4; b < 580; b++)
	      for (int a = 4; a < 580; a++)
	      {
	        
	       B[a]=B[a-4]+0.346;
	        
	       D[a][b][c]=0.153;
	       D[a-1][b-4][c]=0.042;
	      }

    return 0;
}