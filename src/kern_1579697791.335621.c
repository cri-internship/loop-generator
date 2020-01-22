#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(110, "ones");
	int ***D = create_three_dim_int(140, 480, 250, "ones");
	int ***E = create_three_dim_int(290, 540, 350, "ones");
	int **A = create_two_dim_int(960, 920, "ones");
	int **B = create_two_dim_int(160, 320, "ones");

	for (int b = 0; b < 478; b++)
	  for (int a = 3; a < 135; a++)
	  {
	    
	     D[a][b][a]=D[a+5][b+2][a+3]/E[a][b][a];
	    
	     E[a][b][a]=C[a]+D[a][b][a]-B[a][b];
	     E[a][b][a-2]=A[a][b]-D[a][b][a]*A[a][b]/B[a][b];
	    
	     C[a]=A[a][b]+B[a][b];
	     D[a][b][a]=A[a-3][b]+23/D[a][b][a]-C[a];
	  }

    return 0;
}