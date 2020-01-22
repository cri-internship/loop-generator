#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(380, 20, 850, "ones");
	float ***A = create_three_dim_float(560, 580, 70, "ones");

	for (int d = 5; d < 69; d++)
	  for (int c = 0; c < 15; c++)
	    for (int b = 0; b < 375; b++)
	      for (int a = 0; a < 375; a++)
	      {
	        
	       B[a][b][c]=B[a+2][b+5][c+5]/0.279;
	        
	       A[a][b][c]=A[a+4][b+2][c+1]+0.446;
	        
	       B[a][b][c]=B[a+5][b+5][c+5]*0.052;
	        
	       A[a][b][c]=B[a][b][c];
	      }

    return 0;
}