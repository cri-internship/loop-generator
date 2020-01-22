#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(360, "random");
	float *B = create_one_dim_float(380, "random");
	float ***A = create_three_dim_float(400, 670, 40, "random");
	float *D = create_one_dim_float(500, "random");

	for (int d = 0; d < 359; d++)
	  for (int c = 0; c < 359; c++)
	    for (int b = 0; b < 359; b++)
	      for (int a = 0; a < 359; a++)
	      {
	        
	       C[a]=A[a][b][c];
	       C[a+1]=B[a]*D[a]/B[a];
	      }

    return 0;
}