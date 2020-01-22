#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(560, 690, 730, "zeros");
	float ***B = create_three_dim_float(330, 440, 210, "zeros");

	for (int d = 4; d < 210; d++)
	  for (int c = 3; c < 440; c++)
	    for (int b = 3; b < 330; b++)
	      for (int a = 3; a < 330; a++)
	      {
	        
	       B[a][b][c]=B[a-3][b-3][c-4]/0.108;
	        
	       A[a][b][c]=A[a+5][b+2][c+4]/B[a][b][c];
	        
	       A[a][b][c]=A[a+2][b][c+4]/0.949;
	      }

    return 0;
}