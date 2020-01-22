#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(520, 690, "random");
	int **B = create_two_dim_int(560, 270, "random");
	int *C = create_one_dim_int(240, "random");
	int **D = create_two_dim_int(320, 820, "random");
	int **A = create_two_dim_int(320, 560, "random");

	for (int b = 4; b < 559; b++)
	  for (int a = 5; a < 319; a++)
	  {
	    
	     A[a][b]=47;
	     A[a-5][b-4]=2;
	    
	     B[a][b]=A[a][b]*B[a][b]/C[a]-D[a][b]+E[a][b];
	     E[a][b]=A[a+1][b+1]*B[a][b]-E[a][b]+C[a];
	  }

    return 0;
}