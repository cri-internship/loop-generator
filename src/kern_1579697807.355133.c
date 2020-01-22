#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(540, 890, 170, "random");
	int **B = create_two_dim_int(470, 320, "random");

	for (int b = 3; b < 320; b++)
	  for (int a = 1; a < 470; a++)
	  {
	    
	     A[a][b][a]=B[a][b]-A[a][b][a];
	     B[a][b]=B[a-1][b-3]+A[a][b][a];
	  }

    return 0;
}