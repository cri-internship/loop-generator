#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(880, 380, 400, "zeros");

	for (int d = 1; d < 397; d++)
	  for (int c = 5; c < 376; c++)
	    for (int b = 2; b < 875; b++)
	      for (int a = 2; a < 875; a++)
	      {
	        
	       A[a][b][c]=A[a+3][b+1][c+3]-0.194;
	        
	       A[a][b][c]=A[a+1][b][c]*0.309;
	        
	       float var_a=A[a][b][c]/0.784;
	       float var_b=A[a][b-2][c]/0.922;
	        
	       float var_c=A[a][b][c]+0.601;
	       float var_d=A[a-2][b-5][c-1]/0.603;
	        
	       float var_e=A[a][b][c]/0.159;
	       float var_f=A[a+5][b+4][c]-0.127;
	      }

    return 0;
}