#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(420, 210, 430, "zeros");
	int **C = create_two_dim_int(900, 740, "zeros");
	int *D = create_one_dim_int(880, "zeros");
	int *B = create_one_dim_int(130, "zeros");

	for (int a = 4; a < 128; a++)
	{
	  
	    B[a]=B[a-2]+19;
	  
	    D[a]=D[a+1]+45;
	  
	    B[a]=C[a][a]*D[a]-A[a][a][a];
	  
	    C[a][a]=48;
	    C[a-4][a-3]=5;
	  
	    D[a]=12;
	}

    return 0;
}