#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(370, 140, "zeros");
	float ***A = create_three_dim_float(40, 280, 320, "zeros");
	float **B = create_two_dim_float(480, 50, "zeros");
	float **E = create_two_dim_float(730, 350, "zeros");
	float ***D = create_three_dim_float(670, 270, 730, "zeros");

	for (int d = 0; d < 726; d++)
	  for (int c = 4; c < 50; c++)
	    for (int b = 4; b < 476; b++)
	      for (int a = 4; a < 476; a++)
	      {
	        
	       E[a][b]=E[a-2][b-1]+A[a][b][c]*D[a][b][c]-B[a][b];
	        
	       B[a][b]=B[a+4][b]*0.668;
	        
	       D[a][b][c]=C[a][b]-E[a][b]/A[a][b][c]*B[a][b];
	       D[a][b+5][c+4]=A[a][b][c]-0.213+C[a][b]/E[a][b];
	        
	       B[a][b]=E[a][b]/B[a][b]-D[a][b][c]+C[a][b]*A[a][b][c];
	       A[a][b][c]=E[a-4][b-4]*D[a][b][c];
	      }

    return 0;
}