#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(170, "zeros");
	int ***E = create_three_dim_int(150, 110, 820, "zeros");
	int **D = create_two_dim_int(130, 20, "zeros");
	int **B = create_two_dim_int(400, 840, "zeros");
	int **C = create_two_dim_int(10, 190, "zeros");

	for (int b = 2; b < 110; b++)
	  for (int a = 5; a < 150; a++)
	  {
	    
	     E[a][b][a]=8;
	     E[a-4][b-2][a-4]=34;
	    
	     E[a][b][a]=E[a][b][a]-27;
	     C[a][b]=E[a-5][b][a-3]*B[a][b]-A[a]/C[a][b];
	  }

    return 0;
}