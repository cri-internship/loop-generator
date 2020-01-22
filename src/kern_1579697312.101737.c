#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(760, 190, "random");
	int **C = create_two_dim_int(340, 810, "random");
	int ***B = create_three_dim_int(190, 80, 340, "random");

	for (int a = 5; a < 185; a++)
	{
	  
	    C[a][a]=C[a-2][a-5]/26;
	  
	    C[a][a]=B[a][a][a]/9;
	  
	    A[a][a]=19;
	    A[a+1][a+4]=40;
	  
	    C[a][a]=B[a][a][a]+C[a][a];
	    A[a][a]=B[a+5][a+3][a+2]/C[a][a];
	}

    return 0;
}