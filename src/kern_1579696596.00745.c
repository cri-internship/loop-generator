#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(320, 480, "random");
	int **C = create_two_dim_int(800, 900, "random");
	int **D = create_two_dim_int(300, 940, "random");
	int ***A = create_three_dim_int(310, 340, 810, "random");

	for (int d = 5; d < 810; d++)
	  for (int c = 2; c < 340; c++)
	    for (int b = 5; b < 310; b++)
	      for (int a = 5; a < 310; a++)
	      {
	        
	       A[a][b][c]=A[a-5][b-2][c-5]/21;
	        
	       A[a][b][c]=A[a-5][b][c-4]*C[a][b];
	        
	       B[a][b]=B[a+2][b+5]/D[a][b]-A[a][b][c];
	        
	       B[a][b]=33;
	      }

    return 0;
}