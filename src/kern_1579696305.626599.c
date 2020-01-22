#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(70, 410, "random");
	float ***B = create_three_dim_float(430, 490, 980, "random");

	for (int d = 5; d < 975; d++)
	  for (int c = 3; c < 488; c++)
	    for (int b = 1; b < 426; b++)
	      for (int a = 1; a < 426; a++)
	      {
	        
	       B[a][b][c]=B[a-1][b-3][c-5]+A[a][b];
	        
	       B[a][b][c]=B[a+2][b+2][c+4]*0.008;
	      }

    return 0;
}