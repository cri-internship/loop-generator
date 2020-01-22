#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(380, 300, "ones");
	int **D = create_two_dim_int(180, 1000, "ones");
	int *A = create_one_dim_int(110, "ones");
	int **C = create_two_dim_int(850, 620, "ones");
	int *E = create_one_dim_int(80, "ones");

	for (int b = 5; b < 1000; b++)
	  for (int a = 2; a < 180; a++)
	  {
	    
	     D[a][b]=C[a][b];
	     D[a-2][b-4]=E[a];
	    
	     D[a][b]=D[a][b]-B[a][b]*A[a]/C[a][b]+E[a];
	     A[a]=D[a-2][b-5]/A[a]+B[a][b]-E[a];
	  }

    return 0;
}