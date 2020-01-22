#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(890, 460, 570, "zeros");
	int **B = create_two_dim_int(880, 980, "zeros");
	int ***A = create_three_dim_int(440, 630, 680, "zeros");
	int ***C = create_three_dim_int(930, 950, 270, "zeros");

	for (int a = 0; a < 875; a++)
	{
	  
	    B[a][a]=B[a+2][a+5]+C[a][a][a]/A[a][a][a]*D[a][a][a];
	  
	    B[a][a]=C[a][a][a]+D[a][a][a]*A[a][a][a];
	  
	    B[a][a]=C[a][a][a]+B[a][a]/D[a][a][a];
	    C[a][a][a]=C[a+1][a][a+4]/B[a][a]*A[a][a][a]+D[a][a][a];
	  
	    int var_a=B[a][a]-16;
	    int var_b=B[a+2][a+2]+40;
	}

    return 0;
}