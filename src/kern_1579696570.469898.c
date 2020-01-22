#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(700, "zeros");
	int **D = create_two_dim_int(680, 840, "zeros");
	int **B = create_two_dim_int(170, 750, "zeros");
	int **A = create_two_dim_int(710, 740, "zeros");
	int ***C = create_three_dim_int(800, 660, 20, "zeros");

	for (int b = 0; b < 655; b++)
	  for (int a = 0; a < 796; a++)
	  {
	    
	     C[a][b][a]=C[a+2][b+5][a+4]/D[a][b]-A[a][b]*B[a][b]+E[a];
	  }

    return 0;
}