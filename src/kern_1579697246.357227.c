#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(190, 780, 330, "zeros");
	int *A = create_one_dim_int(740, "zeros");
	int **D = create_two_dim_int(750, 780, "zeros");
	int *C = create_one_dim_int(510, "zeros");

	for (int b = 4; b < 740; b++)
	  for (int a = 4; a < 740; a++)
	  {
	    
	     A[a]=C[a];
	     A[a-4]=B[a][b][a]*D[a][b];
	    
	     A[a]=A[a]*D[a][b]+27-C[a];
	     D[a][b]=A[a-4]/C[a]+36;
	  }

    return 0;
}