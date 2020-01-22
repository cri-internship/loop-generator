#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(460, 190, 390, "zeros");
	int ***A = create_three_dim_int(200, 970, 400, "zeros");
	int *B = create_one_dim_int(30, "zeros");
	int *D = create_one_dim_int(350, "zeros");

	for (int a = 3; a < 30; a++)
	{
	  
	    B[a]=B[a-2]*35;
	  
	    C[a][a][a]=C[a-2][a][a-2]-8;
	  
	    C[a][a][a]=C[a-1][a-3][a-2]+12;
	  
	    C[a][a][a]=C[a+1][a+4][a+3]-A[a][a][a]*D[a];
	  
	    A[a][a][a]=13;
	    A[a][a][a+5]=11;
	}

    return 0;
}