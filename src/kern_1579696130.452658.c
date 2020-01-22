#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(410, 710, 790, "zeros");
	int **E = create_two_dim_int(530, 140, "zeros");
	int ***A = create_three_dim_int(270, 520, 650, "zeros");
	int **C = create_two_dim_int(50, 230, "zeros");
	int **B = create_two_dim_int(540, 170, "zeros");

	for (int a = 0; a < 406; a++)
	{
	  
	    D[a][a][a]=18;
	    D[a+3][a+4][a]=27;
	  
	    E[a][a]=39;
	    E[a+3][a+5]=42;
	}

    return 0;
}