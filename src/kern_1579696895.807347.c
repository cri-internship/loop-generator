#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(550, 610, "random");
	int **C = create_two_dim_int(150, 250, "random");
	int ***A = create_three_dim_int(590, 600, 980, "random");
	int ***D = create_three_dim_int(880, 900, 370, "random");

	for (int a = 5; a < 145; a++)
	{
	  
	    A[a][a][a]=A[a-3][a][a-1]-B[a][a]+D[a][a][a];
	  
	    D[a][a][a]=D[a-5][a-4][a-5]/14;
	  
	    B[a][a]=B[a+4][a+1]-44;
	  
	    C[a][a]=C[a+4][a+5]+44;
	  
	    C[a][a]=28;
	  
	    B[a][a]=A[a][a][a]/C[a][a]*B[a][a]+C[a][a];
	    C[a][a]=A[a][a][a-4]+C[a][a]-D[a][a][a]*B[a][a];
	}

    return 0;
}