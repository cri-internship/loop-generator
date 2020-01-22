#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(330, 500, 450, "ones");
	int ***C = create_three_dim_int(230, 840, 770, "ones");
	int **A = create_two_dim_int(520, 110, "ones");
	int **D = create_two_dim_int(880, 630, "ones");

	for (int a = 5; a < 225; a++)
	{
	  
	    B[a][a][a]=B[a-5][a-2][a-5]/D[a][a]-A[a][a];
	  
	    C[a][a][a]=C[a-1][a][a-3]*9;
	  
	    A[a][a]=A[a][a+3]/18;
	  
	    C[a][a][a]=C[a+3][a+4][a+5]*46;
	  
	    A[a][a]=B[a][a][a]/B[a][a][a]+D[a][a];
	  
	    B[a][a][a]=33;
	  
	    C[a][a][a]=D[a][a]*C[a][a][a]-B[a][a][a]+A[a][a];
	    A[a][a]=D[a-4][a-2]/B[a][a][a]*C[a][a][a];
	}

    return 0;
}