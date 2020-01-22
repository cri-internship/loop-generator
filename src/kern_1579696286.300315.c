#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(930, "ones");
	int ***D = create_three_dim_int(720, 980, 950, "ones");
	int **A = create_two_dim_int(990, 520, "ones");
	int *C = create_one_dim_int(260, "ones");
	int *E = create_one_dim_int(440, "ones");

	for (int c = 1; c < 950; c++)
	  for (int b = 1; b < 980; b++)
	    for (int a = 4; a < 256; a++)
	    {
	      
	      D[a][b][c]=D[a][b-1][c-1]*24;
	      
	      B[a]=B[a-4]+A[a][b]/E[a]*C[a]-D[a][b][c];
	      
	      C[a]=8;
	      C[a+3]=9;
	      
	      E[a]=C[a]/B[a]+B[a]-D[a][b][c];
	      D[a][b][c]=C[a+4]*E[a]+D[a][b][c]-A[a][b]/B[a];
	      
	      int var_a=C[a]+37;
	      int var_b=C[a-3]*39;
	    }

    return 0;
}