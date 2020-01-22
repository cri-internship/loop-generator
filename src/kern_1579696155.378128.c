#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(190, 870, "ones");
	int **A = create_two_dim_int(210, 340, "ones");
	int ***C = create_three_dim_int(900, 540, 370, "ones");
	int **D = create_two_dim_int(530, 430, "ones");

	for (int a = 5; a < 190; a++)
	{
	  
	    A[a][a]=A[a+2][a+1]+19;
	  
	    A[a][a]=A[a+3][a+5]-1;
	  
	    B[a][a]=D[a][a];
	    B[a-1][a-5]=A[a][a]*C[a][a][a];
	  
	    D[a][a]=2;
	    D[a-1][a-4]=43;
	  
	    C[a][a][a]=B[a][a];
	    C[a-2][a-1][a-1]=44;
	  
	    C[a][a][a]=45/A[a][a];
	}

    return 0;
}