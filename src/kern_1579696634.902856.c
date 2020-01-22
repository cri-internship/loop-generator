#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(340, 100, "random");
	int *E = create_one_dim_int(410, "random");
	int ***B = create_three_dim_int(780, 700, 360, "random");
	int **A = create_two_dim_int(600, 300, "random");
	int *C = create_one_dim_int(540, "random");

	for (int b = 4; b < 100; b++)
	  for (int a = 5; a < 340; a++)
	  {
	    
	     D[a][b]=D[a-4][b-4]/A[a][b]*C[a];
	    
	     A[a][b]=A[a+4][b+1]-22;
	    
	     D[a][b]=B[a][b][a]*E[a]-B[a][b][a];
	    
	     B[a][b][a]=9;
	     B[a-2][b][a-3]=45;
	    
	     D[a][b]=A[a][b]+11;
	     C[a]=A[a+3][b+2]*C[a]-E[a]+11;
	  }

    return 0;
}