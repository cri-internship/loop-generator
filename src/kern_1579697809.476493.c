#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(450, 390, 20, "ones");
	int **D = create_two_dim_int(700, 780, "ones");
	int ***A = create_three_dim_int(220, 820, 800, "ones");
	int ***C = create_three_dim_int(330, 260, 490, "ones");

	for (int a = 5; a < 220; a++)
	{
	  
	    D[a][a]=D[a-2][a]*C[a][a][a];
	  
	    D[a][a]=D[a][a-3]/48;
	  
	    D[a][a]=D[a+1][a+1]-B[a][a][a]+A[a][a][a]*A[a][a][a];
	  
	    C[a][a][a]=C[a+2][a+2][a+5]*D[a][a]-A[a][a][a]+B[a][a][a];
	  
	    A[a][a][a]=25;
	    A[a-1][a-3][a]=20;
	  
	    int var_a=A[a][a][a]*26;
	    int var_b=A[a-2][a-5][a-5]+9;
	}

    return 0;
}