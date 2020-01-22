#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(50, 820, 840, "ones");
	int ***B = create_three_dim_int(290, 500, 90, "ones");

	for (int a = 5; a < 47; a++)
	{
	  
	    B[a][a][a]=B[a-2][a-2][a-3]/A[a][a][a];
	  
	    B[a][a][a]=B[a+5][a+4][a]/6;
	  
	    A[a][a][a]=30;
	    A[a+3][a+3][a+3]=B[a][a][a];
	  
	    A[a][a][a]=B[a][a][a]+A[a][a][a];
	    B[a][a][a]=B[a+4][a+3][a+1]/A[a][a][a];
	  
	    B[a][a][a]=B[a][a][a]*A[a][a][a];
	    B[a][a][a]=B[a-2][a-5][a-2]/A[a][a][a];
	}

    return 0;
}