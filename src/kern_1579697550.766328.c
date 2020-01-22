#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(390, "random");
	int **D = create_two_dim_int(820, 380, "random");
	int ***A = create_three_dim_int(310, 490, 350, "random");
	int *C = create_one_dim_int(280, "random");

	for (int d = 1; d < 350; d++)
	  for (int c = 4; c < 490; c++)
	    for (int b = 5; b < 280; b++)
	      for (int a = 5; a < 280; a++)
	      {
	        
	       A[a][b][c]=A[a-3][b-3][c]-46;
	        
	       C[a]=C[a-5]+5;
	        
	       A[a][b][c]=A[a-3][b-4][c-1]-B[a]*D[a][b];
	      }

    return 0;
}