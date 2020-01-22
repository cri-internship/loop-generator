#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(430, 520, 30, "ones");
	int ***C = create_three_dim_int(20, 660, 870, "ones");
	int *E = create_one_dim_int(10, "ones");
	int ***B = create_three_dim_int(160, 930, 380, "ones");
	int *A = create_one_dim_int(40, "ones");

	for (int b = 4; b < 660; b++)
	  for (int a = 5; a < 10; a++)
	  {
	    
	     B[a][b][a]=B[a-2][b-2][a-1]/35;
	    
	     C[a][b][a]=A[a]*D[a][b][a]/E[a]+B[a][b][a];
	     C[a-4][b-4][a-1]=48;
	    
	     C[a][b][a]=A[a]+C[a][b][a]*C[a][b][a]/E[a];
	    
	     D[a][b][a]=E[a]/B[a][b][a];
	     E[a]=E[a-5]+D[a][b][a]*C[a][b][a]-B[a][b][a]/A[a];
	  }

    return 0;
}