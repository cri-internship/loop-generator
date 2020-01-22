#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(390, 970, "ones");
	int ***A = create_three_dim_int(600, 130, 550, "ones");

	for (int b = 0; b < 970; b++)
	  for (int a = 4; a < 390; a++)
	  {
	    
	     B[a][b]=B[a-4][b]*A[a][b][a];
	  }

    return 0;
}