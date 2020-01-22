#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(600, 20, 330, "zeros");
	int *C = create_one_dim_int(800, "zeros");
	int ***E = create_three_dim_int(760, 650, 20, "zeros");
	int *D = create_one_dim_int(530, "zeros");
	int ***B = create_three_dim_int(540, 20, 990, "zeros");

	for (int a = 0; a < 595; a++)
	{
	  
	    A[a][a][a]=28;
	    A[a+5][a+5][a]=1;
	}

    return 0;
}