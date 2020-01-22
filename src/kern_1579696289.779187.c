#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(60, 170, 100, "zeros");
	double ***D = create_three_dim_double(880, 640, 670, "zeros");
	double ***C = create_three_dim_double(660, 1000, 700, "zeros");
	double **B = create_two_dim_double(950, 310, "zeros");

	for (int d = 4; d < 98; d++)
	  for (int c = 5; c < 169; c++)
	    for (int b = 5; b < 56; b++)
	      for (int a = 5; a < 56; a++)
	      {
	        
	       C[a][b][c]=C[a-5][b-5][c-2]/0.074;
	        
	       B[a][b]=B[a+2][b+1]*A[a][b][c]+C[a][b][c];
	        
	       A[a][b][c]=A[a][b+1][c+2]-B[a][b]/D[a][b][c];
	        
	       B[a][b]=B[a+3][b+2]-A[a][b][c]+C[a][b][c]*D[a][b][c];
	        
	       A[a][b][c]=D[a][b][c]*C[a][b][c]+B[a][b];
	        
	       D[a][b][c]=D[a][b][c]+A[a][b][c]*C[a][b][c];
	       C[a][b][c]=D[a+3][b+4][c+2]+B[a][b]-A[a][b][c]*C[a][b][c];
	      }

    return 0;
}