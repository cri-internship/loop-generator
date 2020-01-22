#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(860, "ones");
	int ***A = create_three_dim_int(320, 600, 180, "ones");

	for (int d = 0; d < 176; d++)
	  for (int c = 0; c < 597; c++)
	    for (int b = 0; b < 315; b++)
	      for (int a = 0; a < 315; a++)
	      {
	        
	       B[a]=B[a+1]*A[a][b][c];
	        
	       A[a][b][c]=A[a+4][b+2][c]/12;
	        
	       A[a][b][c]=A[a+5][b+1][c+3]-4;
	        
	       int var_a=B[a]*31;
	      }

    return 0;
}