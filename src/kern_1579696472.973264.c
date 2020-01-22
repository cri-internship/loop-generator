#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(660, 910, 290, "zeros");
	int ***A = create_three_dim_int(210, 950, 20, "zeros");

	for (int a = 5; a < 205; a++)
	{
	  
	    B[a][a][a]=B[a-2][a-1][a]/A[a][a][a];
	  
	    A[a][a][a]=A[a][a+1][a+5]-18;
	  
	    B[a][a][a]=B[a][a][a+2]/A[a][a][a];
	  
	    A[a][a][a]=29;
	  
	    B[a][a][a]=B[a][a][a]+A[a][a][a];
	    A[a][a][a]=B[a][a+3][a+1]-28;
	}

    return 0;
}