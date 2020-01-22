#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(120, 200, "ones");
	int ***B = create_three_dim_int(650, 460, 490, "ones");
	int **A = create_two_dim_int(260, 850, "ones");

	for (int a = 3; a < 116; a++)
	{
	  
	    A[a][a]=A[a][a-1]/24;
	  
	    B[a][a][a]=B[a+1][a+2][a+2]-33;
	  
	    B[a][a][a]=B[a+4][a+4][a]*46;
	  
	    B[a][a][a]=B[a+5][a+2][a+2]+47-A[a][a];
	  
	    C[a][a]=22;
	    C[a+4][a+2]=22;
	}

    return 0;
}