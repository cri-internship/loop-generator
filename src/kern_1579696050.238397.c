#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(990, "random");
	int **C = create_two_dim_int(710, 460, "random");
	int **D = create_two_dim_int(750, 640, "random");
	int ***B = create_three_dim_int(710, 660, 740, "random");
	int **A = create_two_dim_int(590, 130, "random");

	for (int b = 4; b < 130; b++)
	  for (int a = 5; a < 590; a++)
	  {
	    
	     C[a][b]=C[a][b-4]-1;
	    
	     A[a][b]=B[a][b][a]/C[a][b]+E[a];
	     A[a-5][b-2]=D[a][b];
	    
	     C[a][b]=E[a]+A[a][b]*D[a][b]/C[a][b]-7;
	  }

    return 0;
}