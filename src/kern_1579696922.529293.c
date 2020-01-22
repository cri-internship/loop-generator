#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(830, 390, 600, "ones");
	float ***B = create_three_dim_float(870, 690, 840, "ones");

	for (int d = 3; d < 597; d++)
	  for (int c = 5; c < 386; c++)
	    for (int b = 4; b < 827; b++)
	      for (int a = 4; a < 827; a++)
	      {
	        
	       B[a][b][c]=B[a-3][b-4][c-3]*0.333;
	        
	       A[a][b][c]=A[a-3][b-3][c-3]/0.419;
	        
	       B[a][b][c]=0.018;
	        
	       A[a][b][c]=0.208;
	        
	       B[a][b][c]=B[a][b][c]+0.376;
	       A[a][b][c]=B[a+2][b+3][c+4]*A[a][b][c];
	      }

    return 0;
}