#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(590, 40, 910, "zeros");
	float ***C = create_three_dim_float(1000, 770, 630, "zeros");
	float ***B = create_three_dim_float(910, 650, 280, "zeros");
	float ***A = create_three_dim_float(690, 360, 620, "zeros");

	for (int d = 2; d < 280; d++)
	  for (int c = 3; c < 359; c++)
	    for (int b = 3; b < 688; b++)
	      for (int a = 3; a < 688; a++)
	      {
	        
	       C[a][b][c]=C[a][b-3][c-1]-D[a][b][c]*A[a][b][c];
	        
	       B[a][b][c]=0.256;
	       B[a-3][b-3][c-2]=0.238;
	        
	       float var_a=A[a][b][c]*0.973;
	       float var_b=A[a+2][b+1][c+3]+0.075;
	        
	       float var_c=C[a][b][c]/0.374;
	       float var_d=C[a+5][b+2][c]/0.72;
	      }

    return 0;
}