#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(840, 280, 900, "ones");
	int ***C = create_three_dim_int(220, 930, 300, "ones");
	int ***D = create_three_dim_int(710, 670, 320, "ones");
	int *E = create_one_dim_int(140, "ones");
	int *B = create_one_dim_int(480, "ones");

	for (int c = 3; c < 300; c++)
	  for (int b = 3; b < 280; b++)
	    for (int a = 5; a < 220; a++)
	    {
	      
	      A[a][b][c]=42;
	      A[a+1][b][c+2]=5;
	      
	      D[a][b][c]=C[a][b][c]-A[a][b][c]+D[a][b][c]/E[a];
	      B[a]=C[a-5][b-3][c-3]-33*E[a];
	    }

    return 0;
}