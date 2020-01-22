#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(280, 570, 240, "random");
	int ***B = create_three_dim_int(830, 210, 640, "random");
	int ***A = create_three_dim_int(680, 510, 540, "random");

	for (int a = 5; a < 276; a++)
	{
	  
	    A[a][a][a]=A[a-4][a-4][a-3]*6;
	  
	    C[a][a][a]=C[a-1][a][a-5]*A[a][a][a]/B[a][a][a];
	  
	    B[a][a][a]=8;
	    B[a-2][a-2][a-4]=47;
	  
	    B[a][a][a]=5;
	  
	    C[a][a][a]=A[a][a][a];
	  
	    C[a][a][a]=A[a][a][a]*C[a][a][a]+B[a][a][a];
	    A[a][a][a]=A[a][a+2][a+4]-B[a][a][a];
	  
	    B[a][a][a]=A[a][a][a]-B[a][a][a]+C[a][a][a];
	    B[a][a][a]=A[a-4][a-4][a-2]/C[a][a][a];
	}

    return 0;
}