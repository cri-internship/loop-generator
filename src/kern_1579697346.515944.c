#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(800, 310, "random");
	float *C = create_one_dim_float(350, "random");
	float ***A = create_three_dim_float(670, 290, 840, "random");

	for (int d = 1; d < 840; d++)
	  for (int c = 3; c < 290; c++)
	    for (int b = 2; b < 347; b++)
	      for (int a = 2; a < 347; a++)
	      {
	        
	       A[a][b][c]=A[a-2][b-3][c-1]/0.513;
	        
	       B[a][b]=B[a][b-1]-0.803;
	        
	       C[a]=C[a+3]+A[a][b][c];
	      }

    return 0;
}