#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(520, 940, "ones");
	int ***B = create_three_dim_int(960, 850, 300, "ones");
	int **D = create_two_dim_int(930, 840, "ones");
	int **C = create_two_dim_int(230, 570, "ones");

	for (int a = 5; a < 226; a++)
	{
	  
	    A[a][a]=A[a+1][a+2]*D[a][a]/C[a][a]-B[a][a][a];
	  
	    D[a][a]=D[a+2][a]*A[a][a];
	  
	    C[a][a]=28;
	    C[a+3][a+4]=A[a][a]-B[a][a][a];
	  
	    B[a][a][a]=C[a][a]-D[a][a];
	    B[a-1][a-4][a-5]=11;
	  
	    int var_a=C[a][a]*41;
	    int var_b=C[a-4][a-5]*45;
	  
	    D[a][a]=B[a][a][a]*A[a][a];
	    C[a][a]=B[a-5][a-1][a-5]*C[a][a]+D[a][a]-A[a][a];
	  
	    int var_c=C[a][a]+11;
	    int var_d=C[a-1][a-5]-1;
	}

    return 0;
}