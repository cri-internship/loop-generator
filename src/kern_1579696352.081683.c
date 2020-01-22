#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(250, 570, 390, "random");
	int ***A = create_three_dim_int(900, 610, 480, "random");

	for (int a = 5; a < 245; a++)
	{
	  
	    A[a][a][a]=A[a-4][a-1][a-5]*38;
	  
	    B[a][a][a]=B[a-2][a-5][a-5]-31;
	  
	    B[a][a][a]=B[a][a][a+5]-21;
	  
	    A[a][a][a]=A[a][a][a]/B[a][a][a];
	    B[a][a][a]=A[a][a-2][a-2]-B[a][a][a];
	}

    return 0;
}