#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(230, 30, "random");
	int **C = create_two_dim_int(880, 550, "random");
	int ***A = create_three_dim_int(190, 930, 550, "random");

	for (int a = 5; a < 190; a++)
	{
	  
	    C[a][a]=C[a-3][a]/A[a][a][a];
	  
	    C[a][a]=C[a-3][a-5]-B[a][a]*B[a][a];
	  
	    A[a][a][a]=A[a-1][a-4][a-3]+15;
	  
	    B[a][a]=B[a-2][a]*2;
	  
	    B[a][a]=8;
	  
	    A[a][a][a]=B[a][a]*C[a][a];
	    B[a][a]=B[a][a-2]/C[a][a];
	  
	    C[a][a]=C[a][a]*A[a][a][a]/37;
	    B[a][a]=C[a+3][a+5]*B[a][a]-A[a][a][a];
	}

    return 0;
}