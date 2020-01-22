#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(420, 610, 510, "zeros");
	int **A = create_two_dim_int(960, 620, "zeros");
	int *C = create_one_dim_int(290, "zeros");

	for (int a = 5; a < 287; a++)
	{
	  
	    A[a][a]=A[a-5][a]+29;
	  
	    B[a][a][a]=B[a+2][a+1][a+4]/C[a]-A[a][a];
	  
	    C[a]=C[a+1]*25;
	  
	    C[a]=37-B[a][a][a];
	  
	    A[a][a]=22;
	  
	    B[a][a][a]=C[a]/5;
	    A[a][a]=C[a-2]-A[a][a];
	}

    return 0;
}