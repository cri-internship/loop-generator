#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(920, 690, 190, "random");
	float ***A = create_three_dim_float(160, 110, 960, "random");

	for (int d = 4; d < 187; d++)
	  for (int c = 2; c < 105; c++)
	    for (int b = 5; b < 156; b++)
	      for (int a = 5; a < 156; a++)
	      {
	        
	       A[a][b][c]=A[a-5][b-1][c-3]/B[a][b][c];
	        
	       A[a][b][c]=A[a+3][b+3][c+4]+0.535;
	        
	       A[a][b][c]=A[a+4][b+5][c+5]+0.525;
	        
	       B[a][b][c]=0.858;
	       B[a][b+4][c+3]=0.09;
	        
	       B[a][b][c]=0.639;
	        
	       float var_a=A[a][b][c]-0.092;
	       float var_b=A[a-1][b-2][c-3]*0.31;
	        
	       float var_c=A[a][b][c]-0.046;
	       float var_d=A[a+4][b+3][c+2]-0.206;
	      }

    return 0;
}