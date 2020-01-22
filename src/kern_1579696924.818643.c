#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(810, "ones");
	int **C = create_two_dim_int(500, 260, "ones");
	int *A = create_one_dim_int(80, "ones");
	int *B = create_one_dim_int(720, "ones");

	for (int a = 4; a < 79; a++)
	{
	  
	    C[a][a]=C[a-2][a-1]*B[a];
	  
	    C[a][a]=C[a][a-1]+A[a]*D[a]/B[a];
	  
	    A[a]=A[a-1]*C[a][a];
	  
	    B[a]=B[a+4]/D[a];
	  
	    B[a]=C[a][a]*A[a]+D[a];
	  
	    D[a]=C[a][a]*A[a]-B[a];
	    D[a+4]=C[a][a]*A[a]-B[a];
	  
	    A[a]=C[a][a]*D[a]/B[a];
	}

    return 0;
}