#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(710, 400, 880, "ones");
	int ***D = create_three_dim_int(70, 920, 300, "ones");
	int *C = create_one_dim_int(30, "ones");
	int *A = create_one_dim_int(760, "ones");
	int *E = create_one_dim_int(310, "ones");

	for (int c = 0; c < 299; c++)
	  for (int b = 0; b < 919; b++)
	    for (int a = 0; a < 65; a++)
	    {
	      
	      D[a][b][c]=D[a][b][c]-36;
	      E[a]=D[a+5][b+1][c+1]*27+B[a][b][c];
	      
	      int var_a=E[a]*25;
	      int var_b=E[a]+11;
	    }

    return 0;
}