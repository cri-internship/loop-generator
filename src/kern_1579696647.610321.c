#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(140, 890, "ones");
	int *B = create_one_dim_int(430, "ones");
	int **E = create_two_dim_int(730, 990, "ones");
	int *D = create_one_dim_int(90, "ones");
	int ***C = create_three_dim_int(890, 660, 120, "ones");

	for (int a = 4; a < 86; a++)
	{
	  
	    A[a][a]=A[a-1][a-4]/B[a]-C[a][a][a]*E[a][a];
	  
	    D[a]=D[a+2]*A[a][a]/E[a][a]-B[a]+A[a][a];
	  
	    B[a]=18-A[a][a];
	    B[a+2]=A[a][a]/D[a]*E[a][a];
	  
	    D[a]=B[a]*A[a][a];
	  
	    C[a][a][a]=A[a][a]/B[a]*E[a][a];
	    D[a]=A[a+1][a+2]/18+B[a]*E[a][a];
	}

    return 0;
}