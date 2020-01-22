#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(350, 750, 370, "zeros");
	float ***D = create_three_dim_float(670, 180, 830, "zeros");
	float ***C = create_three_dim_float(620, 830, 200, "zeros");
	float ***A = create_three_dim_float(700, 380, 380, "zeros");
	float **B = create_two_dim_float(610, 740, "zeros");

	for (int d = 4; d < 196; d++)
	  for (int c = 4; c < 178; c++)
	    for (int b = 5; b < 620; b++)
	      for (int a = 5; a < 620; a++)
	      {
	        
	       A[a][b][c]=A[a][b-4][c-2]+0.942;
	        
	       A[a][b][c]=A[a-5][b-1][c-4]*0.789;
	        
	       C[a][b][c]=C[a][b+3][c+4]*0.734;
	        
	       D[a][b][c]=0.064;
	       D[a+5][b+2][c+4]=0.427;
	        
	       D[a][b][c]=0.184;
	      }

    return 0;
}