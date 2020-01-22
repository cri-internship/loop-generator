#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(770, 720, "ones");
	int **A = create_two_dim_int(650, 80, "ones");

	for (int a = 5; a < 646; a++)
	{
	  
	    A[a][a]=A[a-2][a-3]-7;
	  
	    A[a][a]=13;
	  
	    B[a][a]=A[a][a]+B[a][a];
	    A[a][a]=A[a-2][a-5]*B[a][a];
	  
	    B[a][a]=B[a][a]/22;
	    A[a][a]=B[a][a-5]*24;
	  
	    B[a][a]=A[a][a]*B[a][a];
	    B[a][a]=A[a+3][a+1]*B[a][a];
	  
	    B[a][a]=B[a][a]+22;
	    B[a][a]=B[a-3][a]+41;
	  
	    A[a][a]=B[a][a]/50;
	    B[a][a]=B[a+2][a+4]+42;
	}

    return 0;
}