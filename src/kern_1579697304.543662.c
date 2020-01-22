#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(440, 210, 960, "ones");
	int ***D = create_three_dim_int(270, 590, 690, "ones");
	int ***A = create_three_dim_int(460, 90, 800, "ones");
	int ***C = create_three_dim_int(390, 260, 350, "ones");

	for (int a = 4; a < 270; a++)
	{
	  
	    A[a][a][a]=A[a+3][a+5][a]+C[a][a][a];
	  
	    D[a][a][a]=B[a][a][a]*A[a][a][a]+C[a][a][a];
	    D[a-2][a-4][a-4]=A[a][a][a]-B[a][a][a];
	  
	    C[a][a][a]=B[a][a][a]+D[a][a][a]-A[a][a][a]*D[a][a][a];
	    D[a][a][a]=B[a][a+3][a+2]/D[a][a][a]+C[a][a][a];
	}

    return 0;
}