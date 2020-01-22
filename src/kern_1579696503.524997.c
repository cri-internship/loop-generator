#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(430, 350, "ones");
	int ***A = create_three_dim_int(290, 370, 120, "ones");
	int **C = create_two_dim_int(770, 540, "ones");
	int *E = create_one_dim_int(540, "ones");
	int *B = create_one_dim_int(220, "ones");

	for (int a = 5; a < 220; a++)
	{
	  
	    B[a]=B[a-1]+20/E[a]*D[a][a];
	  
	    D[a][a]=D[a+2][a]+12;
	  
	    D[a][a]=16/B[a];
	  
	    B[a]=C[a][a]+D[a][a]/B[a];
	    E[a]=C[a][a-5]*D[a][a]+E[a];
	}

    return 0;
}