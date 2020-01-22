#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(10, 130, 540, "zeros");
	float *D = create_one_dim_float(790, "zeros");
	float ***C = create_three_dim_float(930, 560, 460, "zeros");
	float ***B = create_three_dim_float(390, 350, 50, "zeros");
	float *A = create_one_dim_float(480, "zeros");

	for (int d = 4; d < 50; d++)
	  for (int c = 4; c < 125; c++)
	    for (int b = 0; b < 9; b++)
	      for (int a = 0; a < 9; a++)
	      {
	        
	       C[a][b][c]=C[a+1][b+3][c+3]+0.793;
	        
	       E[a][b][c]=0.257;
	       E[a+1][b+5][c+5]=0.737;
	        
	       B[a][b][c]=A[a];
	       B[a][b-4][c-4]=E[a][b][c]-D[a]+C[a][b][c]*A[a];
	      }

    return 0;
}