#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(910, 600, 960, "ones");
	int **A = create_two_dim_int(80, 860, "ones");
	int *C = create_one_dim_int(220, "ones");
	int ***D = create_three_dim_int(170, 920, 780, "ones");

	for (int a = 5; a < 77; a++)
	{
	  
	    A[a][a]=A[a][a+3]/14;
	  
	    C[a]=C[a+1]-19;
	  
	    D[a][a][a]=D[a+4][a][a+3]/22;
	  
	    B[a][a][a]=40;
	    B[a-5][a-2][a-1]=A[a][a];
	  
	    C[a]=24;
	  
	    A[a][a]=A[a][a]+C[a]*B[a][a][a]-47;
	    C[a]=A[a][a-3]+C[a];
	}

    return 0;
}