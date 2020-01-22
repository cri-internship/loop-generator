#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(620, 370, 620, "zeros");
	int ***B = create_three_dim_int(80, 520, 690, "zeros");
	int ***D = create_three_dim_int(90, 370, 770, "zeros");
	int ***C = create_three_dim_int(20, 20, 660, "zeros");

	for (int a = 2; a < 16; a++)
	{
	  
	    A[a][a][a]=A[a][a+3][a+5]*B[a][a][a]+D[a][a][a];
	  
	    A[a][a][a]=A[a][a+2][a+2]*C[a][a][a];
	  
	    C[a][a][a]=C[a][a][a]+A[a][a][a]-23/A[a][a][a];
	    B[a][a][a]=C[a+3][a+4][a+2]/A[a][a][a];
	  
	    int var_a=A[a][a][a]+49;
	    int var_b=A[a-2][a][a]-20;
	}

    return 0;
}