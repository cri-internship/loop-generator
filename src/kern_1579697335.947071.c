#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(570, 440, 680, "ones");
	float **D = create_two_dim_float(340, 470, "ones");
	float **B = create_two_dim_float(100, 750, "ones");
	float ***C = create_three_dim_float(130, 130, 450, "ones");
	float **A = create_two_dim_float(820, 810, "ones");

	for (int d = 4; d < 680; d++)
	  for (int c = 5; c < 440; c++)
	    for (int b = 4; b < 340; b++)
	      for (int a = 4; a < 340; a++)
	      {
	        
	       E[a][b][c]=E[a][b][c-4]+0.674;
	        
	       D[a][b]=D[a-4][b-5]+A[a][b];
	        
	       E[a][b][c]=E[a-1][b-3][c-1]*C[a][b][c]-B[a][b];
	        
	       D[a][b]=D[a][b]/E[a][b][c]+A[a][b]-B[a][b]*C[a][b][c];
	       B[a][b]=D[a-2][b-2]/A[a][b]*E[a][b][c];
	      }

    return 0;
}