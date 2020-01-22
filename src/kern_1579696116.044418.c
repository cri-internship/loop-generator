#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(60, "random");
	int *D = create_one_dim_int(140, "random");
	int **E = create_two_dim_int(510, 940, "random");
	int **A = create_two_dim_int(560, 630, "random");
	int *C = create_one_dim_int(270, "random");

	for (int a = 1; a < 57; a++)
	{
	  
	    B[a]=B[a-1]*C[a]/11-A[a][a];
	  
	    A[a][a]=A[a+1][a+1]+33;
	  
	    C[a]=C[a+2]/24;
	  
	    B[a]=B[a+3]+33;
	  
	    int var_a=A[a][a]/36;
	    int var_b=A[a+5][a+3]-47;
	}

    return 0;
}