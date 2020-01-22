#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(570, 30, 410, "zeros");
	float ***A = create_three_dim_float(30, 660, 880, "zeros");

	for (int d = 5; d < 407; d++)
	  for (int c = 5; c < 26; c++)
	    for (int b = 4; b < 27; b++)
	      for (int a = 4; a < 27; a++)
	      {
	        
	       B[a][b][c]=B[a-1][b-2][c-4]/0.212;
	        
	       B[a][b][c]=B[a-4][b-5][c-5]-0.908;
	        
	       A[a][b][c]=A[a+3][b+2][c+4]/0.454;
	        
	       float var_a=B[a][b][c]*0.039;
	       float var_b=B[a+4][b+4][c+3]/0.194;
	      }

    return 0;
}