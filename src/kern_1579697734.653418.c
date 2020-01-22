#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(790, 580, 610, "ones");
	int ***C = create_three_dim_int(820, 750, 540, "ones");
	int **B = create_two_dim_int(780, 250, "ones");

	for (int d = 3; d < 540; d++)
	  for (int c = 1; c < 250; c++)
	    for (int b = 5; b < 780; b++)
	      for (int a = 5; a < 780; a++)
	      {
	        
	       B[a][b]=B[a-5][b-1]/49;
	        
	       A[a][b][c]=C[a][b][c]-B[a][b];
	       B[a][b]=C[a][b-1][c-3]*A[a][b][c]/B[a][b];
	      }

    return 0;
}