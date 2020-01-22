#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(470, 310, "ones");
	int **C = create_two_dim_int(730, 550, "ones");
	int ***A = create_three_dim_int(520, 510, 630, "ones");
	int **B = create_two_dim_int(920, 480, "ones");
	int *E = create_one_dim_int(550, "ones");

	for (int c = 0; c < 306; c++)
	  for (int b = 0; b < 468; b++)
	    for (int a = 0; a < 468; a++)
	    {
	      
	      D[a][b]=D[a+2][b+4]/15;
	      
	      B[a][b]=15;
	      B[a+2][b+2]=15;
	      
	      B[a][b]=42;
	    }

    return 0;
}