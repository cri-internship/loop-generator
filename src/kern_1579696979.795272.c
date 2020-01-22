#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(270, 600, 850, "zeros");
	float ***A = create_three_dim_float(930, 440, 880, "zeros");

	for (int d = 5; d < 848; d++)
	  for (int c = 5; c < 440; c++)
	    for (int b = 4; b < 266; b++)
	      for (int a = 4; a < 266; a++)
	      {
	        
	       A[a][b][c]=A[a-2][b][c-4]-B[a][b][c];
	        
	       B[a][b][c]=B[a+4][b+2][c+2]+0.64;
	        
	       B[a][b][c]=0.865;
	        
	       A[a][b][c]=0.514;
	      }

    return 0;
}