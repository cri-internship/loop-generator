#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(310, 490, 130, "zeros");

	for (int d = 5; d < 125; d++)
	  for (int c = 5; c < 486; c++)
	    for (int b = 4; b < 305; b++)
	      for (int a = 4; a < 305; a++)
	      {
	        
	       A[a][b][c]=A[a-4][b-5][c-5]*0.682;
	        
	       A[a][b][c]=A[a+2][b+3][c+3]/0.047;
	        
	       A[a][b][c]=A[a+5][b+4][c+3]*0.785;
	        
	       double var_a=A[a][b][c]*0.45;
	       double var_b=A[a+5][b+3][c+5]/0.331;
	      }

    return 0;
}