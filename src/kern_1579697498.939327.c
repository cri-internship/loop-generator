#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(660, 330, "zeros");
	int *D = create_one_dim_int(800, "zeros");
	int **C = create_two_dim_int(420, 130, "zeros");
	int ***A = create_three_dim_int(670, 700, 510, "zeros");

	for (int b = 0; b < 130; b++)
	  for (int a = 0; a < 420; a++)
	  {
	    
	     C[a][b]=A[a][b][a]*D[a];
	     D[a]=C[a][b]+B[a][b];
	    
	     C[a][b]=D[a]-C[a][b];
	  }

    return 0;
}