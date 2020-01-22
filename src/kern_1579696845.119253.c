#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(930, 780, 890, "ones");
	int **A = create_two_dim_int(760, 720, "ones");
	int **C = create_two_dim_int(540, 980, "ones");

	for (int a = 5; a < 535; a++)
	{
	  
	    C[a][a]=C[a-5][a-1]/19;
	  
	    C[a][a]=C[a-1][a-1]+B[a][a][a]-11;
	  
	    C[a][a]=C[a-2][a]-0;
	  
	    C[a][a]=C[a+5][a+3]+B[a][a][a];
	  
	    int var_a=C[a][a]+20;
	  
	    int var_c=B[a][a][a]-6;
	    int var_d=B[a-2][a-5][a-3]+23;
	}

    return 0;
}