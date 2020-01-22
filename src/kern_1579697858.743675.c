#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(300, 790, 40, "random");
	int ***A = create_three_dim_int(350, 100, 290, "random");

	for (int a = 5; a < 295; a++)
	{
	  
	    A[a][a][a]=A[a+4][a][a]-22;
	  
	    A[a][a][a]=A[a][a][a]-9;
	    B[a][a][a]=A[a][a-5][a-2]-22;
	  
	    A[a][a][a]=B[a][a][a]*A[a][a][a];
	    A[a][a][a]=B[a+2][a+5][a+1]-A[a][a][a];
	}

    return 0;
}