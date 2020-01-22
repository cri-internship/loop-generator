#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(1000, "ones");
	int **D = create_two_dim_int(300, 390, "ones");
	int **A = create_two_dim_int(740, 740, "ones");
	int *B = create_one_dim_int(740, "ones");
	int *C = create_one_dim_int(690, "ones");

	for (int c = 0; c < 385; c++)
	  for (int b = 4; b < 300; b++)
	    for (int a = 4; a < 300; a++)
	    {
	      
	      D[a][b]=D[a][b+5]-B[a]+A[a][b]/E[a]*C[a];
	      
	      E[a]=31;
	      E[a-4]=36;
	    }

    return 0;
}