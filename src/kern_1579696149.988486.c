#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(250, 690, 470, "random");
	int *A = create_one_dim_int(790, "random");
	int *E = create_one_dim_int(160, "random");
	int ***B = create_three_dim_int(840, 540, 140, "random");
	int **C = create_two_dim_int(140, 60, "random");

	for (int b = 5; b < 160; b++)
	  for (int a = 5; a < 160; a++)
	  {
	    
	     E[a]=E[a-5]/C[a][b];
	    
	     E[a]=A[a]+E[a];
	     C[a][b]=A[a+5]/D[a][b][a];
	  }

    return 0;
}