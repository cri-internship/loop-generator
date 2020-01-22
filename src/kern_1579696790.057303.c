#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(700, 60, 410, "ones");
	int *A = create_one_dim_int(430, "ones");
	int *B = create_one_dim_int(370, "ones");
	int *C = create_one_dim_int(100, "ones");

	for (int a = 5; a < 99; a++)
	{
	  
	    C[a]=C[a+1]*32;
	  
	    B[a]=B[a+4]-C[a];
	  
	    A[a]=D[a][a][a]*B[a]+33;
	    A[a+1]=B[a]-D[a][a][a]*40;
	  
	    A[a]=D[a][a][a]-A[a]/B[a]*23;
	    D[a][a][a]=D[a+1][a+2][a+2]*B[a];
	  
	    B[a]=B[a]*C[a]+D[a][a][a];
	    C[a]=B[a-5]*D[a][a][a]+26;
	}

    return 0;
}