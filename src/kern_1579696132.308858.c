#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(560, 270, "random");
	int *B = create_one_dim_int(660, "random");
	int **C = create_two_dim_int(880, 960, "random");
	int **E = create_two_dim_int(920, 360, "random");
	int *A = create_one_dim_int(860, "random");

	for (int b = 5; b < 270; b++)
	  for (int a = 2; a < 560; a++)
	  {
	    
	     D[a][b]=D[a][b-2]-E[a][b]/C[a][b]+B[a]*11;
	    
	     E[a][b]=E[a+1][b+4]/36;
	    
	     D[a][b]=40;
	  }

    return 0;
}