#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(300, 330, "random");
	int **C = create_two_dim_int(60, 90, "random");
	int *B = create_one_dim_int(980, "random");
	int ***A = create_three_dim_int(700, 440, 160, "random");

	for (int a = 5; a < 60; a++)
	{
	  
	    C[a][a]=C[a-4][a-1]+B[a]*D[a][a];
	  
	    C[a][a]=C[a-3][a-5]-A[a][a][a]/A[a][a][a]+B[a];
	  
	    B[a]=B[a-5]+26;
	  
	    B[a]=B[a+4]+1;
	  
	    D[a][a]=C[a][a]*B[a]-D[a][a];
	    B[a]=C[a-3][a-3]-43+A[a][a][a];
	}

    return 0;
}