#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(120, 190, "ones");
	int **D = create_two_dim_int(210, 790, "ones");
	int **A = create_two_dim_int(340, 860, "ones");
	int **B = create_two_dim_int(650, 800, "ones");

	for (int b = 4; b < 800; b++)
	  for (int a = 5; a < 340; a++)
	  {
	    
	     A[a][b]=A[a-5][b-4]/B[a][b]+C[a][b];
	    
	     A[a][b]=B[a][b]/D[a][b]*A[a][b]-D[a][b];
	     D[a][b]=B[a-3][b-1]+46/C[a][b]-D[a][b];
	  }

    return 0;
}