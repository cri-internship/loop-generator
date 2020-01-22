#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(990, 480, 180, "random");
	int *A = create_one_dim_int(780, "random");

	for (int d = 5; d < 180; d++)
	  for (int c = 4; c < 480; c++)
	    for (int b = 4; b < 776; b++)
	      for (int a = 4; a < 776; a++)
	      {
	        
	       A[a]=27;
	       float  var_a=A[a]/2;
	        
	       A[a]=A[a-4]+B[a][b][c];
	        
	       B[a][b][c]=B[a][b-4][c-5]*15;
	        
	       A[a]=A[a+1]-2;
	        
	       int var_b=B[a][b][c]*41;
	       int var_c=B[a-3][b][c-4]-7;
	        
	       A[a]=A[a]*B[a][b][c];
	       B[a][b][c]=A[a+4]/B[a][b][c];
	      }

    return 0;
}