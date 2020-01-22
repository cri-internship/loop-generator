#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(540, 290, 980, "random");
	int ***A = create_three_dim_int(750, 130, 930, "random");

	for (int a = 5; a < 535; a++)
	{
	  
	    B[a][a][a]=B[a-2][a-5][a-3]-26;
	  
	    A[a][a][a]=A[a][a-2][a-5]+50;
	  
	    B[a][a][a]=B[a-5][a-4][a-3]/A[a][a][a];
	  
	    B[a][a][a]=B[a+4][a+1][a+5]/A[a][a][a];
	  
	    B[a][a][a]=B[a][a][a]-A[a][a][a];
	    A[a][a][a]=B[a][a+3][a+1]+A[a][a][a];
	  
	    A[a][a][a]=A[a][a][a]*19;
	    B[a][a][a]=A[a+4][a+2][a+1]/B[a][a][a];
	  
	    B[a][a][a]=A[a][a][a]-B[a][a][a];
	    B[a][a][a]=A[a-2][a-5][a-1]+B[a][a][a];
	}

    return 0;
}