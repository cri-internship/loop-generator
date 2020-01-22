#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(200, 910, "random");
	int *B = create_one_dim_int(530, "random");
	int *C = create_one_dim_int(990, "random");
	int ***D = create_three_dim_int(200, 450, 560, "random");

	for (int d = 3; d < 560; d++)
	  for (int c = 4; c < 450; c++)
	    for (int b = 2; b < 200; b++)
	      for (int a = 2; a < 200; a++)
	      {
	        
	       D[a][b][c]=D[a-2][b-3][c-3]+A[a][b];
	        
	       A[a][b]=C[a]+D[a][b][c];
	       A[a-2][b-4]=B[a]+D[a][b][c];
	        
	       C[a]=D[a][b][c];
	       C[a]=46-B[a]+A[a][b];
	        
	       int var_a=C[a]-43;
	       int var_b=C[a+1]/14;
	      }

    return 0;
}