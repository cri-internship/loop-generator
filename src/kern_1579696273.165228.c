#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(970, 820, "zeros");
	float ***A = create_three_dim_float(370, 940, 910, "zeros");

	for (int d = 5; d < 820; d++)
	  for (int c = 2; c < 970; c++)
	    for (int b = 2; b < 970; b++)
	      for (int a = 2; a < 970; a++)
	      {
	        
	       B[a][b]=B[a-1][b-5]*0.179;
	        
	       B[a][b]=B[a-2][b-4]/A[a][b][c];
	        
	       B[a][b]=B[a-2][b-2]/A[a][b][c];
	      }

    return 0;
}