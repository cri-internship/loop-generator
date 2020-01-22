#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(800, 340, "random");
	float ***B = create_three_dim_float(750, 140, 240, "random");
	float **C = create_two_dim_float(700, 210, "random");

	for (int d = 0; d < 236; d++)
	  for (int c = 0; c < 138; c++)
	    for (int b = 0; b < 699; b++)
	      for (int a = 0; a < 699; a++)
	      {
	        
	       C[a][b]=C[a+1][b+5]/0.717;
	        
	       B[a][b][c]=A[a][b];
	       B[a+5][b+2][c+4]=C[a][b];
	        
	       A[a][b]=C[a][b]/B[a][b][c];
	       C[a][b]=C[a][b+5]+A[a][b];
	      }

    return 0;
}