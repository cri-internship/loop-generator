#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(880, 250, 40, "zeros");
	int ***E = create_three_dim_int(570, 160, 310, "zeros");
	int ***C = create_three_dim_int(900, 580, 520, "zeros");
	int *D = create_one_dim_int(410, "zeros");
	int **A = create_two_dim_int(800, 780, "zeros");

	for (int a = 0; a < 409; a++)
	{
	  
	    D[a]=E[a][a][a]/14;
	    D[a+1]=C[a][a][a]*A[a][a]/E[a][a][a]+40;
	}

    return 0;
}