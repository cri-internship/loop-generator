#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(700, 420, 950, "ones");
	int ***B = create_three_dim_int(200, 450, 840, "ones");

	for (int a = 5; a < 195; a++)
	{
	  
	    B[a][a][a]=A[a][a][a];
	    B[a-5][a-2][a-4]=18;
	  
	    A[a][a][a]=A[a][a][a]-B[a][a][a];
	    B[a][a][a]=A[a-1][a-4][a-3]+B[a][a][a];
	  
	    A[a][a][a]=B[a][a][a]*37;
	    A[a][a][a]=B[a+3][a+3][a+5]*A[a][a][a];
	  
	    A[a][a][a]=A[a][a][a]-B[a][a][a];
	    A[a][a][a]=A[a+4][a+3][a+5]+B[a][a][a];
	  
	    A[a][a][a]=B[a][a][a]+A[a][a][a];
	    A[a][a][a]=B[a+1][a][a+1]+A[a][a][a];
	}

    return 0;
}