#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(450, 150, "zeros");
	int **C = create_two_dim_int(250, 470, "zeros");
	int **A = create_two_dim_int(770, 290, "zeros");
	int **E = create_two_dim_int(310, 510, "zeros");
	int ***D = create_three_dim_int(380, 580, 660, "zeros");

	for (int b = 4; b < 580; b++)
	  for (int a = 5; a < 380; a++)
	  {
	    
	     D[a][b][a]=D[a-5][b-4][a-5]+B[a][b]*A[a][b]/C[a][b];
	  }

    return 0;
}