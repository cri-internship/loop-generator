#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(890, 280, "zeros");
	float ***C = create_three_dim_float(30, 730, 650, "zeros");
	float ***B = create_three_dim_float(550, 500, 10, "zeros");

	for (int d = 3; d < 650; d++)
	  for (int c = 4; c < 730; c++)
	    for (int b = 1; b < 30; b++)
	      for (int a = 1; a < 30; a++)
	      {
	        
	       C[a][b][c]=C[a-1][b-4][c-3]/A[a][b]*B[a][b][c];
	      }

    return 0;
}