#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(710, 670, 40, "zeros");
	int **D = create_two_dim_int(690, 410, "zeros");
	int **B = create_two_dim_int(660, 70, "zeros");
	int **A = create_two_dim_int(190, 320, "zeros");

	for (int a = 5; a < 190; a++)
	{
	  
	    C[a][a][a]=C[a-5][a-2][a-4]-B[a][a]*A[a][a];
	  
	    D[a][a]=D[a-5][a-1]-13;
	  
	    D[a][a]=D[a+3][a+1]-6;
	  
	    A[a][a]=15;
	    A[a][a]=B[a][a];
	  
	    int var_a=B[a][a]+49;
	    int var_b=B[a-5][a-2]*13;
	  
	    int var_c=D[a][a]+38;
	    int var_d=D[a+4][a+5]*50;
	}

    return 0;
}