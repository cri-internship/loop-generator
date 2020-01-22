#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(10, 530, 900, "ones");
	int ***E = create_three_dim_int(860, 550, 310, "ones");
	int ***C = create_three_dim_int(500, 80, 910, "ones");
	int **D = create_two_dim_int(240, 570, "ones");
	int **A = create_two_dim_int(570, 10, "ones");

	for (int d = 5; d < 310; d++)
	  for (int c = 3; c < 530; c++)
	    for (int b = 2; b < 10; b++)
	      for (int a = 2; a < 10; a++)
	      {
	        
	       E[a][b][c]=E[a][b-1][c-1]-B[a][b][c];
	        
	       A[a][b]=B[a][b][c]*D[a][b]+C[a][b][c];
	       B[a][b][c]=B[a-2][b-3][c-5]/E[a][b][c]-A[a][b];
	      }

    return 0;
}