#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(760, 620, "ones");
	int **E = create_two_dim_int(580, 480, "ones");
	int ***A = create_three_dim_int(490, 910, 550, "ones");
	int **C = create_two_dim_int(800, 690, "ones");
	int **B = create_two_dim_int(840, 360, "ones");

	for (int a = 5; a < 490; a++)
	{
	  
	    B[a][a]=B[a-4][a-4]-10;
	  
	    C[a][a]=C[a-2][a-4]-29;
	  
	    D[a][a]=D[a-3][a-1]-C[a][a]*E[a][a]+B[a][a];
	  
	    B[a][a]=B[a-5][a-4]+A[a][a][a]*D[a][a]-A[a][a][a];
	  
	    A[a][a][a]=13;
	    float  var_a=A[a][a][a]+9;
	  
	    C[a][a]=A[a][a][a]*19;
	  
	    D[a][a]=E[a][a]*28;
	    E[a][a]=E[a+4][a+2]*D[a][a];
	}

    return 0;
}