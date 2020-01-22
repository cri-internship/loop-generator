#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(650, 70, 510, "zeros");
	int ***D = create_three_dim_int(620, 760, 190, "zeros");
	int **E = create_two_dim_int(380, 130, "zeros");
	int **A = create_two_dim_int(30, 780, "zeros");
	int *B = create_one_dim_int(600, "zeros");

	for (int a = 0; a < 26; a++)
	{
	  
	    A[a][a]=A[a+4][a+2]-B[a]+C[a][a][a];
	  
	    C[a][a][a]=38;
	    C[a+3][a+5][a+2]=17;
	  
	    B[a]=23;
	    B[a+3]=9;
	  
	    B[a]=A[a][a]/D[a][a][a]+E[a][a]*B[a];
	    A[a][a]=A[a+4][a+1]-D[a][a][a]/B[a]*C[a][a][a]+E[a][a];
	  
	    C[a][a][a]=C[a][a][a]-A[a][a];
	    E[a][a]=C[a+3][a+4][a]/37;
	}

    return 0;
}