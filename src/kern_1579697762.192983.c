#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(940, "ones");
	int ***B = create_three_dim_int(230, 630, 750, "ones");
	int ***A = create_three_dim_int(910, 260, 780, "ones");
	int ***C = create_three_dim_int(610, 10, 440, "ones");
	int ***E = create_three_dim_int(460, 10, 610, "ones");

	for (int a = 0; a < 607; a++)
	{
	  
	    A[a][a][a]=A[a+1][a+3][a+3]/24;
	  
	    C[a][a][a]=E[a][a][a]+B[a][a][a];
	    C[a+3][a+1][a+2]=A[a][a][a]-B[a][a][a]+E[a][a][a]*D[a];
	}

    return 0;
}