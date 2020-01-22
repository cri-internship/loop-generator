#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(80, 550, "ones");
	float **D = create_two_dim_float(300, 810, "ones");
	float *B = create_one_dim_float(290, "ones");
	float ***A = create_three_dim_float(510, 320, 330, "ones");

	for (int d = 3; d < 548; d++)
	  for (int c = 4; c < 77; c++)
	    for (int b = 4; b < 77; b++)
	      for (int a = 4; a < 77; a++)
	      {
	        
	       D[a][b]=D[a-1][b-3]-0.183;
	        
	       C[a][b]=C[a+3][b+2]+B[a]/A[a][b][c];
	        
	       B[a]=0.644;
	       B[a-4]=0.353;
	      }

    return 0;
}