#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(160, "ones");
	int ***A = create_three_dim_int(660, 200, 160, "ones");

	for (int d = 2; d < 160; d++)
	  for (int c = 5; c < 200; c++)
	    for (int b = 4; b < 158; b++)
	      for (int a = 4; a < 158; a++)
	      {
	        
	       A[a][b][c]=A[a-4][b-5][c-2]*25;
	        
	       B[a]=A[a][b][c];
	       B[a+2]=A[a][b][c];
	        
	       int var_a=A[a][b][c]*29;
	       int var_b=A[a-1][b-1][c-2]+20;
	      }

    return 0;
}