#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(130, "zeros");
	int *A = create_one_dim_int(200, "zeros");
	int ***C = create_three_dim_int(100, 110, 850, "zeros");
	int ***D = create_three_dim_int(230, 930, 270, "zeros");

	for (int c = 3; c < 850; c++)
	  for (int b = 4; b < 110; b++)
	    for (int a = 1; a < 100; a++)
	    {
	      
	      C[a][b][c]=C[a-1][b-4][c-3]+40;
	      
	      A[a]=A[a+1]/B[a]*C[a][b][c];
	      
	      C[a][b][c]=B[a]+A[a]/D[a][b][c];
	      B[a]=B[a+5]/C[a][b][c];
	      
	      int var_a=B[a]*44;
	      int var_b=B[a+1]+3;
	    }

    return 0;
}