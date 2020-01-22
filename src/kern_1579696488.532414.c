#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(620, "ones");
	int ***C = create_three_dim_int(600, 130, 430, "ones");
	int **B = create_two_dim_int(600, 720, "ones");
	int *E = create_one_dim_int(100, "ones");
	int ***A = create_three_dim_int(200, 620, 220, "ones");

	for (int c = 0; c < 428; c++)
	  for (int b = 2; b < 130; b++)
	    for (int a = 4; a < 596; a++)
	    {
	      
	      B[a][b]=B[a-4][b-2]+31;
	      
	      C[a][b][c]=C[a+4][b][c+2]-A[a][b][c]+E[a];
	    }

    return 0;
}