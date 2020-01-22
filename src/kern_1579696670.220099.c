#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(410, 60, 150, "random");
	int ***A = create_three_dim_int(350, 660, 940, "random");

	for (int a = 5; a < 345; a++)
	{
	  
	    A[a][a][a]=A[a+1][a+5][a+1]*25;
	  
	    A[a][a][a]=B[a][a][a];
	  
	    B[a][a][a]=A[a][a][a];
	    B[a][a-5][a-1]=A[a][a][a];
	  
	    A[a][a][a]=B[a][a][a]+A[a][a][a];
	    B[a][a][a]=B[a][a][a+3]-A[a][a][a];
	  
	    A[a][a][a]=B[a][a][a]*A[a][a][a];
	    B[a][a][a]=B[a+5][a+1][a+1]*38;
	}

    return 0;
}