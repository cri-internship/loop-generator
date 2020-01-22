#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(480, "zeros");
	int ***A = create_three_dim_int(700, 740, 450, "zeros");
	int *E = create_one_dim_int(800, "zeros");
	int **C = create_two_dim_int(410, 130, "zeros");
	int **B = create_two_dim_int(760, 940, "zeros");

	for (int b = 5; b < 130; b++)
	  for (int a = 5; a < 410; a++)
	  {
	    
	     C[a][b]=A[a][b][a]+B[a][b]/E[a];
	     C[a-2][b-5]=D[a]+E[a];
	    
	     D[a]=C[a][b]-A[a][b][a]+D[a];
	     C[a][b]=C[a-5][b-2]*39;
	  }

    return 0;
}