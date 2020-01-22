#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(190, 590, 50, "ones");
	int *B = create_one_dim_int(600, "ones");
	int ***A = create_three_dim_int(330, 580, 490, "ones");

	for (int a = 5; a < 186; a++)
	{
	  
	    B[a]=B[a-4]-2;
	  
	    B[a]=B[a-5]+25/C[a][a][a];
	  
	    C[a][a][a]=C[a+4][a+3][a+4]*B[a]+B[a];
	  
	    A[a][a][a]=10;
	    A[a-5][a][a-1]=C[a][a][a]/B[a];
	  
	    A[a][a][a]=C[a][a][a]*9;
	    B[a]=C[a-4][a-1][a-3]/A[a][a][a];
	  
	    C[a][a][a]=B[a]-A[a][a][a]+C[a][a][a];
	    C[a][a][a]=B[a+1]-C[a][a][a]*A[a][a][a];
	}

    return 0;
}