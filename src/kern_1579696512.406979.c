#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(540, "ones");
	float ***D = create_three_dim_float(140, 480, 490, "ones");
	float **C = create_two_dim_float(880, 220, "ones");
	float **B = create_two_dim_float(900, 470, "ones");
	float ***E = create_three_dim_float(610, 330, 650, "ones");

	for (int d = 2; d < 490; d++)
	  for (int c = 4; c < 219; c++)
	    for (int b = 3; b < 140; b++)
	      for (int a = 3; a < 140; a++)
	      {
	        
	       D[a][b][c]=D[a][b-4][c-2]+0.805;
	        
	       C[a][b]=C[a-1][b-4]+B[a][b]-A[a]/D[a][b][c]*E[a][b][c];
	        
	       C[a][b]=C[a+3][b]-E[a][b][c]+D[a][b][c]*A[a];
	        
	       C[a][b]=C[a+5][b+1]+B[a][b]*0.175/A[a]-D[a][b][c];
	        
	       E[a][b][c]=C[a][b];
	       E[a-3][b-4][c-2]=A[a]-0.289;
	      }

    return 0;
}