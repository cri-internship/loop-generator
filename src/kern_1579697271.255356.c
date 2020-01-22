#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(670, "random");
	int ***A = create_three_dim_int(410, 380, 280, "random");
	int **B = create_two_dim_int(430, 70, "random");
	int ***D = create_three_dim_int(410, 50, 750, "random");

	for (int a = 5; a < 406; a++)
	{
	  
	    C[a]=C[a-2]-2;
	  
	    C[a]=C[a-5]-B[a][a]*A[a][a][a];
	  
	    C[a]=C[a+5]+D[a][a][a]*D[a][a][a]-B[a][a];
	  
	    A[a][a][a]=A[a][a+4][a+4]*34;
	  
	    A[a][a][a]=35;
	  
	    int var_a=C[a]+19;
	    int var_b=C[a]/22;
	}

    return 0;
}