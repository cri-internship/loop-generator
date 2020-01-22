#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(810, "random");
	float ***B = create_three_dim_float(320, 380, 770, "random");
	float *A = create_one_dim_float(950, "random");

	for (int d = 1; d < 770; d++)
	  for (int c = 4; c < 380; c++)
	    for (int b = 5; b < 320; b++)
	      for (int a = 5; a < 320; a++)
	      {
	        
	       B[a][b][c]=B[a-4][b-4][c-1]+0.625;
	        
	       C[a]=C[a+1]-A[a];
	        
	       A[a]=A[a+3]+0.269;
	        
	       C[a]=0.945;
	      }

    return 0;
}