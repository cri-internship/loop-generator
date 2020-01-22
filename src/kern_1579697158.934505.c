#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(430, 650, "ones");
	int *C = create_one_dim_int(420, "ones");
	int **E = create_two_dim_int(630, 490, "ones");
	int *B = create_one_dim_int(380, "ones");
	int **A = create_two_dim_int(840, 170, "ones");

	for (int b = 4; b < 420; b++)
	  for (int a = 4; a < 420; a++)
	  {
	    
	     E[a][b]=C[a]+E[a][b]/D[a][b]-B[a];
	     D[a][b]=C[a-4]*A[a][b]-E[a][b]/B[a]+25;
	  }

    return 0;
}