#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(290, "random");
	float ***A = create_three_dim_float(470, 710, 120, "random");

	for (int d = 1; d < 118; d++)
	  for (int c = 2; c < 705; c++)
	    for (int b = 1; b < 466; b++)
	      for (int a = 1; a < 466; a++)
	      {
	        
	       A[a][b][c]=A[a-1][b-2][c-1]/0.001;
	        
	       A[a][b][c]=A[a+4][b+5][c+1]-0.373;
	        
	       A[a][b][c]=A[a][b][c]/B[a];
	       B[a]=A[a+1][b+3][c+2]*B[a];
	      }

    return 0;
}