#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(900, 140, 310, "random");
	int ***C = create_three_dim_int(670, 90, 540, "random");
	int **B = create_two_dim_int(230, 200, "random");
	int **D = create_two_dim_int(850, 130, "random");
	int **E = create_two_dim_int(960, 570, "random");

	for (int a = 3; a < 665; a++)
	{
	  
	    A[a][a][a]=A[a-2][a-1][a-3]+4*C[a][a][a]-B[a][a];
	  
	    A[a][a][a]=A[a][a+5][a+4]*E[a][a]+D[a][a]-C[a][a][a]/B[a][a];
	  
	    A[a][a][a]=D[a][a]+15/A[a][a][a]*E[a][a]-B[a][a];
	    D[a][a]=C[a][a][a]-A[a][a][a]*B[a][a]/E[a][a];
	  
	    C[a][a][a]=C[a+5][a+3][a]*37;
	  
	    D[a][a]=C[a][a][a]+B[a][a]*A[a][a][a]-15;
	}

    return 0;
}