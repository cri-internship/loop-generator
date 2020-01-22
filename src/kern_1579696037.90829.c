#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(640, 720, 440, "zeros");
	int **B = create_two_dim_int(920, 1000, "zeros");

	for (int a = 5; a < 917; a++)
	{
	  
	    B[a][a]=B[a+3][a+1]-A[a][a][a];
	  
	    B[a][a]=23;
	  
	    int var_a=B[a][a]*46;
	    int var_b=B[a-5][a-5]-5;
	  
	    A[a][a][a]=B[a][a]+A[a][a][a];
	    B[a][a]=B[a-3][a]*A[a][a][a];
	}

    return 0;
}