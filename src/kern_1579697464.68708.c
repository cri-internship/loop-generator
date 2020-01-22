#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(770, "zeros");
	int ***B = create_three_dim_int(20, 290, 370, "zeros");

	for (int d = 0; d < 366; d++)
	  for (int c = 0; c < 286; c++)
	    for (int b = 4; b < 17; b++)
	      for (int a = 4; a < 17; a++)
	      {
	        
	       A[a]=A[a-4]-B[a][b][c];
	        
	       A[a]=A[a+1]-B[a][b][c];
	        
	       B[a][b][c]=B[a+3][b+4][c+4]*25;
	        
	       B[a][b][c]=B[a+3][b+2][c+1]+A[a];
	      }

    return 0;
}