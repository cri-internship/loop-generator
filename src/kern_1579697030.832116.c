#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(110, 210, "ones");
	int **B = create_two_dim_int(620, 500, "ones");
	int **D = create_two_dim_int(640, 500, "ones");
	int ***C = create_three_dim_int(680, 770, 660, "ones");

	for (int d = 4; d < 497; d++)
	  for (int c = 5; c < 617; c++)
	    for (int b = 5; b < 617; b++)
	      for (int a = 5; a < 617; a++)
	      {
	        
	       D[a][b]=D[a+3][b]+A[a][b]-B[a][b];
	        
	       D[a][b]=D[a+5][b]*C[a][b][c]/A[a][b];
	        
	       D[a][b]=D[a+3][b+3]-C[a][b][c]*A[a][b];
	        
	       B[a][b]=D[a][b]/D[a][b];
	       B[a+3][b]=D[a][b];
	      }

    return 0;
}