#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(320, 230, 420, "random");
	float *B = create_one_dim_float(180, "random");

	for (int d = 4; d < 177; d++)
	  for (int c = 4; c < 177; c++)
	    for (int b = 4; b < 177; b++)
	      for (int a = 4; a < 177; a++)
	      {
	        
	       B[a]=B[a+3]-A[a][b][c];
	        
	       B[a]=B[a]/A[a][b][c];
	       A[a][b][c]=B[a-4]+A[a][b][c];
	      }

    return 0;
}