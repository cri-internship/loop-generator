#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(820, 390, "zeros");
	int ***C = create_three_dim_int(560, 520, 90, "zeros");
	int **A = create_two_dim_int(470, 960, "zeros");

	for (int b = 3; b < 960; b++)
	  for (int a = 5; a < 470; a++)
	  {
	    
	     A[a][b]=A[a-5][b-1]+B[a][b]/C[a][b][a];
	    
	     A[a][b]=A[a-3][b-3]+23;
	  }

    return 0;
}