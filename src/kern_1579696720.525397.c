#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(180, "zeros");
	int **B = create_two_dim_int(550, 470, "zeros");
	int **C = create_two_dim_int(340, 70, "zeros");

	for (int a = 3; a < 176; a++)
	{
	  
	    A[a]=A[a-2]+32;
	  
	    C[a][a]=C[a][a-3]-A[a]/33;
	  
	    B[a][a]=B[a+1][a+2]*43;
	  
	    A[a]=A[a+4]*C[a][a];
	  
	    C[a][a]=C[a+3][a+5]-24;
	  
	    C[a][a]=C[a+4][a+5]*18;
	}

    return 0;
}