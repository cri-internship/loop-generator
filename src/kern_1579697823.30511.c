#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(380, 590, "random");
	float **E = create_two_dim_float(110, 600, "random");
	float ***A = create_three_dim_float(500, 940, 340, "random");
	float **B = create_two_dim_float(490, 600, "random");
	float *D = create_one_dim_float(830, "random");

	for (int d = 0; d < 339; d++)
	  for (int c = 0; c < 936; c++)
	    for (int b = 0; b < 500; b++)
	      for (int a = 0; a < 500; a++)
	      {
	        
	       E[a][b]=A[a][b][c]-E[a][b];
	       A[a][b][c]=A[a][b+4][c+1]+D[a];
	      }

    return 0;
}