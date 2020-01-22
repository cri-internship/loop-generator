#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(960, 550, 650, "zeros");
	int ***A = create_three_dim_int(820, 760, 810, "zeros");
	int **C = create_two_dim_int(910, 530, "zeros");

	for (int a = 4; a < 905; a++)
	{
	  
	    C[a][a]=C[a+5][a+4]/13;
	  
	    C[a][a]=B[a][a][a];
	}

    return 0;
}