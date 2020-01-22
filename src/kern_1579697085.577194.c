#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(750, 930, 90, "zeros");
	double **B = create_two_dim_double(620, 840, "zeros");
	double *C = create_one_dim_double(770, "zeros");
	double ***A = create_three_dim_double(580, 370, 310, "zeros");

	for (int d = 4; d < 86; d++)
	  for (int c = 4; c < 840; c++)
	    for (int b = 2; b < 620; b++)
	      for (int a = 2; a < 620; a++)
	      {
	        
	       D[a][b][c]=D[a][b-4][c-4]*B[a][b]/C[a];
	        
	       D[a][b][c]=D[a+5][b+5][c+4]+A[a][b][c]*C[a];
	        
	       D[a][b][c]=D[a+5][b+1][c]/A[a][b][c];
	        
	       B[a][b]=0.976;
	       B[a-2][b-4]=0.644;
	        
	       C[a]=D[a][b][c]-B[a][b]*A[a][b][c];
	       C[a+4]=A[a][b][c]/D[a][b][c]*B[a][b];
	      }

    return 0;
}