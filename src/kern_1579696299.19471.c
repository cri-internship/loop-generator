#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(960, 960, 380, "ones");
	float **C = create_two_dim_float(490, 520, "ones");
	float **B = create_two_dim_float(30, 730, "ones");
	float *A = create_one_dim_float(10, "ones");
	float **D = create_two_dim_float(550, 650, "ones");

	for (int d = 0; d < 379; d++)
	  for (int c = 0; c < 958; c++)
	    for (int b = 0; b < 957; b++)
	      for (int a = 0; a < 957; a++)
	      {
	        
	       E[a][b][c]=E[a+3][b+2][c+1]+D[a][b]*B[a][b]/C[a][b]-A[a];
	      }

    return 0;
}