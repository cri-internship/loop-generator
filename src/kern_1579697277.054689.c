#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(910, 710, "ones");
	float ***B = create_three_dim_float(850, 880, 990, "ones");

	for (int d = 0; d < 990; d++)
	  for (int c = 0; c < 878; c++)
	    for (int b = 0; b < 845; b++)
	      for (int a = 0; a < 845; a++)
	      {
	        
	       B[a][b][c]=B[a+5][b+2][c]+A[a][b];
	      }

    return 0;
}