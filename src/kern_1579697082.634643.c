#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(40, 930, "random");
	int ***B = create_three_dim_int(40, 370, 190, "random");
	int ***A = create_three_dim_int(510, 390, 870, "random");
	int **D = create_two_dim_int(880, 310, "random");

	for (int a = 5; a < 35; a++)
	{
	  
	    B[a][a][a]=B[a-2][a-2][a-4]+A[a][a][a]*D[a][a]/C[a][a];
	  
	    B[a][a][a]=B[a-4][a-2][a-2]/6;
	  
	    D[a][a]=D[a+4][a]+34;
	  
	    B[a][a][a]=B[a+4][a+5][a+1]*49;
	  
	    D[a][a]=5;
	  
	    A[a][a][a]=B[a][a][a]-C[a][a];
	    A[a-5][a-5][a-5]=C[a][a]/D[a][a];
	  
	    D[a][a]=C[a][a]/B[a][a][a]*D[a][a]+A[a][a][a];
	    A[a][a][a]=C[a+1][a+4]*A[a][a][a];
	}

    return 0;
}