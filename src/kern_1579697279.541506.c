#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(960, "ones");
	int *C = create_one_dim_int(370, "ones");
	int ***D = create_three_dim_int(30, 390, 420, "ones");
	int **B = create_two_dim_int(780, 210, "ones");

	for (int d = 0; d < 416; d++)
	  for (int c = 0; c < 387; c++)
	    for (int b = 0; b < 28; b++)
	      for (int a = 0; a < 28; a++)
	      {
	        
	       A[a]=B[a][b]+D[a][b][c];
	       D[a][b][c]=A[a]+C[a];
	        
	       A[a]=D[a][b][c]/22+C[a];
	       B[a][b]=D[a+2][b+3][c+4]/A[a]-B[a][b]*C[a];
	      }

    return 0;
}