#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(960, 130, 430, "ones");
	int **A = create_two_dim_int(610, 630, "ones");
	int *D = create_one_dim_int(420, "ones");
	int ***E = create_three_dim_int(670, 70, 600, "ones");
	int ***C = create_three_dim_int(190, 220, 230, "ones");

	for (int a = 4; a < 186; a++)
	{
	  
	    E[a][a][a]=E[a+4][a+1][a+2]/B[a][a][a]-C[a][a][a];
	  
	    E[a][a][a]=E[a][a][a]+A[a][a]-D[a]*D[a]/B[a][a][a];
	    C[a][a][a]=E[a+5][a+4][a+2]/D[a]+A[a][a];
	  
	    D[a]=E[a][a][a]+D[a];
	    B[a][a][a]=E[a+1][a+1][a+2]*1-D[a];
	  
	    int var_a=C[a][a][a]-37;
	    int var_b=C[a+4][a+2][a+4]*21;
	  
	    int var_c=E[a][a][a]-47;
	    int var_d=E[a-4][a-1][a-2]+38;
	}

    return 0;
}