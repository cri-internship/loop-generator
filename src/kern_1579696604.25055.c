#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(880, 1000, "random");
	float ***A = create_three_dim_float(460, 980, 550, "random");

	for (int d = 0; d < 550; d++)
	  for (int c = 0; c < 977; c++)
	    for (int b = 0; b < 458; b++)
	      for (int a = 0; a < 458; a++)
	      {
	        
	       A[a][b][c]=A[a+2][b+3][c]/0.149;
	      }

    return 0;
}