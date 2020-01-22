#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(40, 360, 600, "ones");
	int *A = create_one_dim_int(80, "ones");

	for (int d = 2; d < 597; d++)
	  for (int c = 4; c < 356; c++)
	    for (int b = 5; b < 39; b++)
	      for (int a = 5; a < 39; a++)
	      {
	        
	       A[a]=A[a-5]+1;
	        
	       B[a][b][c]=B[a+1][b+4][c+3]-A[a];
	        
	       int var_a=B[a][b][c]-18;
	       int var_b=B[a-2][b-4][c-2]+5;
	        
	       B[a][b][c]=B[a][b][c]-A[a];
	       A[a]=B[a-4][b-4][c-1]/A[a];
	      }

    return 0;
}