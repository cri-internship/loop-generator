#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(560, 770, "random");
	int ***A = create_three_dim_int(580, 490, 580, "random");
	int ***C = create_three_dim_int(420, 390, 170, "random");
	int *D = create_one_dim_int(590, "random");

	for (int a = 2; a < 418; a++)
	{
	  
	    B[a][a]=B[a][a-2]-23;
	  
	    B[a][a]=B[a+4][a+3]/D[a];
	  
	    A[a][a][a]=A[a+2][a+2][a+2]+3;
	  
	    C[a][a][a]=C[a][a+2][a+2]-6;
	  
	    A[a][a][a]=23;
	  
	    D[a]=C[a][a][a]+0;
	    D[a+1]=B[a][a];
	  
	    C[a][a][a]=D[a]-B[a][a];
	}

    return 0;
}