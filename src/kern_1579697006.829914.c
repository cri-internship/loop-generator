#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(860, 940, 680, "ones");
	float ***C = create_three_dim_float(550, 380, 310, "ones");
	float ***B = create_three_dim_float(900, 450, 60, "ones");
	float ***E = create_three_dim_float(950, 690, 810, "ones");
	float ***D = create_three_dim_float(190, 770, 420, "ones");

	for (int d = 3; d < 306; d++)
	  for (int c = 1; c < 379; c++)
	    for (int b = 4; b < 546; b++)
	      for (int a = 4; a < 546; a++)
	      {
	        
	       C[a][b][c]=C[a-4][b][c-3]/0.989;
	        
	       A[a][b][c]=A[a][b-1][c-2]*0.561;
	        
	       E[a][b][c]=E[a+2][b][c]+B[a][b][c]/C[a][b][c]*A[a][b][c];
	        
	       C[a][b][c]=C[a+4][b+1][c+4]*E[a][b][c]/D[a][b][c]-D[a][b][c]+B[a][b][c];
	        
	       E[a][b][c]=E[a+2][b+1][c+3]+B[a][b][c]/C[a][b][c]*D[a][b][c];
	      }

    return 0;
}