#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(190, 170, 220, "random");
	int **B = create_two_dim_int(40, 510, "random");
	int ***C = create_three_dim_int(410, 670, 550, "random");

	for (int a = 5; a < 37; a++)
	{
	  
	    C[a][a][a]=C[a-2][a-5][a-3]*A[a][a][a];
	  
	    C[a][a][a]=C[a+1][a+3][a+4]-14;
	  
	    B[a][a]=B[a+1][a+1]*17;
	  
	    A[a][a][a]=A[a+1][a+5][a+3]+48;
	  
	    C[a][a][a]=C[a+5][a+5][a+2]+B[a][a];
	  
	    A[a][a][a]=43;
	  
	    B[a][a]=29;
	}

    return 0;
}