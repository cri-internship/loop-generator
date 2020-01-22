#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(540, "zeros");
	int ***A = create_three_dim_int(460, 30, 410, "zeros");
	int **B = create_two_dim_int(830, 640, "zeros");
	int **D = create_two_dim_int(840, 930, "zeros");
	int **E = create_two_dim_int(490, 590, "zeros");

	for (int a = 0; a < 836; a++)
	{
	  
	    D[a][a]=D[a+2][a+3]*37;
	  
	    int var_a=D[a][a]*11;
	    int var_b=D[a][a+4]+49;
	}

    return 0;
}