#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(370, 310, "ones");
	int ***D = create_three_dim_int(670, 450, 590, "ones");
	int ***B = create_three_dim_int(780, 940, 530, "ones");
	int ***C = create_three_dim_int(310, 130, 80, "ones");

	for (int d = 0; d < 530; d++)
	  for (int c = 5; c < 310; c++)
	    for (int b = 5; b < 370; b++)
	      for (int a = 5; a < 370; a++)
	      {
	        
	       B[a][b][c]=B[a-5][b-4][c]*C[a][b][c]+A[a][b];
	        
	       A[a][b]=A[a-5][b-5]-D[a][b][c];
	      }

    return 0;
}