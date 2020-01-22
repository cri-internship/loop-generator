#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(780, 260, "zeros");
	int ***A = create_three_dim_int(890, 650, 600, "zeros");
	int ***B = create_three_dim_int(400, 440, 620, "zeros");
	int **D = create_two_dim_int(660, 710, "zeros");

	for (int a = 5; a < 395; a++)
	{
	  
	    C[a][a]=C[a-5][a-1]*31;
	  
	    A[a][a][a]=A[a-2][a-5][a-3]+B[a][a][a]-D[a][a]/C[a][a];
	  
	    B[a][a][a]=B[a-1][a-5][a]+3;
	  
	    C[a][a]=C[a][a+1]*46;
	  
	    B[a][a][a]=A[a][a][a]*26/D[a][a];
	}

    return 0;
}