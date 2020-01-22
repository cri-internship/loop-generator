#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(380, 610, 260, "ones");
	float **B = create_two_dim_float(210, 30, "ones");
	float ***C = create_three_dim_float(130, 370, 130, "ones");

	for (int d = 2; d < 125; d++)
	  for (int c = 4; c < 30; c++)
	    for (int b = 4; b < 127; b++)
	      for (int a = 4; a < 127; a++)
	      {
	        
	       B[a][b]=B[a-4][b-4]-0.169;
	        
	       C[a][b][c]=C[a+3][b][c+5]-B[a][b];
	        
	       A[a][b][c]=B[a][b];
	       A[a-3][b][c-2]=B[a][b];
	        
	       float var_a=A[a][b][c]+0.999;
	       float var_b=A[a+1][b+5][c+1]-0.159;
	      }

    return 0;
}