#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(640, "zeros");
	float ***A = create_three_dim_float(370, 370, 530, "zeros");
	float **C = create_two_dim_float(700, 470, "zeros");

	for (int d = 3; d < 527; d++)
	  for (int c = 3; c < 366; c++)
	    for (int b = 3; b < 366; b++)
	      for (int a = 3; a < 366; a++)
	      {
	        
	       A[a][b][c]=A[a-3][b-3][c-3]*0.203;
	        
	       A[a][b][c]=A[a-2][b-3][c-2]*0.38;
	        
	       A[a][b][c]=A[a+4][b+4][c+3]*B[a];
	        
	       C[a][b]=C[a+2][b+1]/0.424;
	      }

    return 0;
}