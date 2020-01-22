#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(840, "random");
	float ***A = create_three_dim_float(910, 800, 880, "random");
	float *C = create_one_dim_float(210, "random");

	for (int d = 3; d < 880; d++)
	  for (int c = 1; c < 795; c++)
	    for (int b = 4; b < 208; b++)
	      for (int a = 4; a < 208; a++)
	      {
	        
	       C[a]=C[a+2]+A[a][b][c]*B[a];
	        
	       A[a][b][c]=A[a+1][b][c]*0.304;
	        
	       A[a][b][c]=0.157;
	        
	       C[a]=A[a][b][c]/C[a]-B[a];
	       B[a]=A[a+4][b+5][c]+C[a]-B[a];
	      }

    return 0;
}