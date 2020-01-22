#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(830, "random");
	int ***A = create_three_dim_int(980, 40, 960, "random");
	int ***B = create_three_dim_int(450, 720, 170, "random");

	for (int a = 5; a < 447; a++)
	{
	  
	    B[a][a][a]=B[a-2][a-4][a-5]*A[a][a][a]/C[a];
	  
	    A[a][a][a]=A[a][a+1][a]*38;
	  
	    A[a][a][a]=20;
	  
	    A[a][a][a]=B[a][a][a]-A[a][a][a]/C[a];
	    B[a][a][a]=B[a+2][a+3][a+1]/C[a]*A[a][a][a];
	  
	    int var_a=A[a][a][a]+20;
	    int var_b=A[a-5][a-1][a-4]+29;
	}

    return 0;
}