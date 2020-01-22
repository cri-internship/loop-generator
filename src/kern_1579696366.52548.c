#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(800, 250, 710, "zeros");
	int **B = create_two_dim_int(250, 540, "zeros");
	int **C = create_two_dim_int(720, 640, "zeros");
	int **A = create_two_dim_int(90, 700, "zeros");

	for (int b = 3; b < 250; b++)
	  for (int a = 3; a < 250; a++)
	  {
	    
	     D[a][b][a]=D[a-3][b-3][a-3]-A[a][b]*C[a][b]/B[a][b];
	    
	     B[a][b]=B[a][b+1]+1;
	  }

    return 0;
}