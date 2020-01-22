#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(490, 650, 890, "zeros");
	int ***C = create_three_dim_int(820, 880, 660, "zeros");
	int *A = create_one_dim_int(40, "zeros");

	for (int a = 4; a < 36; a++)
	{
	  
	    C[a][a][a]=C[a-2][a-2][a-4]*B[a][a][a];
	  
	    A[a]=A[a+1]*49;
	  
	    B[a][a][a]=B[a+4][a+4][a+1]*A[a];
	  
	    int var_a=A[a]/44;
	  
	    A[a]=A[a]+2;
	    B[a][a][a]=A[a+4]/B[a][a][a]+C[a][a][a];
	}

    return 0;
}