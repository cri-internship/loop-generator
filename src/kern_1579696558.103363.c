#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(210, 420, "ones");
	float ***A = create_three_dim_float(750, 90, 770, "ones");

	for (int d = 0; d < 765; d++)
	  for (int c = 4; c < 85; c++)
	    for (int b = 2; b < 207; b++)
	      for (int a = 2; a < 207; a++)
	      {
	        
	       B[a][b]=B[a-1][b-4]/0.418;
	        
	       B[a][b]=B[a+3][b+2]+0.043;
	        
	       A[a][b][c]=A[a+1][b+2][c]-0.833;
	        
	       A[a][b][c]=A[a+4][b+5][c+1]*0.017;
	        
	       B[a][b]=B[a+1][b+3]-0.934;
	        
	       float var_a=A[a][b][c]+0.127;
	       float var_b=A[a-2][b-3][c]-0.811;
	      }

    return 0;
}