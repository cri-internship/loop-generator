#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(210, 690, "zeros");
	int *C = create_one_dim_int(220, "zeros");
	int ***E = create_three_dim_int(130, 210, 580, "zeros");
	int ***A = create_three_dim_int(530, 240, 630, "zeros");
	int **B = create_two_dim_int(480, 330, "zeros");

	for (int a = 1; a < 207; a++)
	{
	  
	    C[a]=C[a-1]+4;
	  
	    A[a][a][a]=A[a+1][a+4][a+3]/40;
	  
	    B[a][a]=37;
	    B[a+5][a+3]=6;
	  
	    D[a][a]=44;
	    D[a][a+3]=34;
	  
	    D[a][a]=B[a][a]*C[a];
	    B[a][a]=B[a+4][a+5]/E[a][a][a];
	}

    return 0;
}