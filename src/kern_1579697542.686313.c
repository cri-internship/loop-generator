#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(730, 300, 980, "ones");
	int *E = create_one_dim_int(430, "ones");
	int **A = create_two_dim_int(220, 180, "ones");
	int ***C = create_three_dim_int(270, 560, 820, "ones");
	int ***D = create_three_dim_int(160, 610, 460, "ones");

	for (int a = 5; a < 215; a++)
	{
	  
	    A[a][a]=A[a+2][a+2]-C[a][a][a]/D[a][a][a]*40+E[a];
	  
	    E[a]=12;
	    E[a-4]=35;
	  
	    E[a]=40;
	  
	    A[a][a]=29;
	  
	    B[a][a][a]=34;
	    B[a-5][a-5][a-2]=5;
	  
	    C[a][a][a]=32;
	    C[a][a-3][a-4]=30;
	}

    return 0;
}