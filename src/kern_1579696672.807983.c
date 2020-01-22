#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(370, 10, 360, "ones");
	int ***E = create_three_dim_int(840, 10, 620, "ones");
	int *C = create_one_dim_int(540, "ones");
	int **B = create_two_dim_int(400, 30, "ones");
	int *A = create_one_dim_int(350, "ones");

	for (int b = 0; b < 26; b++)
	  for (int a = 0; a < 395; a++)
	  {
	    
	     B[a][b]=B[a+5][b+4]-C[a]+A[a]/E[a][b][a]*D[a][b][a];
	    
	     C[a]=47*B[a][b];
	     C[a+1]=35*A[a];
	  }

    return 0;
}