#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(710, 800, "random");
	float ***D = create_three_dim_float(120, 420, 590, "random");
	float **B = create_two_dim_float(670, 520, "random");
	float **C = create_two_dim_float(740, 110, "random");

	for (int d = 0; d < 590; d++)
	  for (int c = 0; c < 105; c++)
	    for (int b = 0; b < 118; b++)
	      for (int a = 0; a < 118; a++)
	      {
	        
	       D[a][b][c]=D[a+2][b+1][c]-0.472;
	        
	       C[a][b]=0.513;
	       C[a+4][b+5]=0.289;
	      }

    return 0;
}