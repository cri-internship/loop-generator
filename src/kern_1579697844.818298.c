#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(70, 30, "ones");
	double **D = create_two_dim_double(140, 910, "ones");
	double ***A = create_three_dim_double(340, 60, 750, "ones");
	double **C = create_two_dim_double(500, 920, "ones");

	for (int d = 4; d < 748; d++)
	  for (int c = 5; c < 28; c++)
	    for (int b = 5; b < 66; b++)
	      for (int a = 5; a < 66; a++)
	      {
	        
	       D[a][b]=D[a-1][b-5]/0.969;
	        
	       A[a][b][c]=A[a-5][b-3][c-4]+0.275;
	        
	       A[a][b][c]=A[a+2][b+5][c+2]-D[a][b]+C[a][b]*0.957;
	        
	       D[a][b]=D[a+1][b]/0.987;
	        
	       B[a][b]=B[a+4][b+2]*A[a][b][c];
	        
	       A[a][b][c]=D[a][b]/B[a][b];
	       D[a][b]=D[a-1][b-1]+0.267;
	      }

    return 0;
}