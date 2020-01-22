#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(230, 680, 650, "zeros");
	int ***D = create_three_dim_int(420, 290, 200, "zeros");
	int ***B = create_three_dim_int(860, 220, 190, "zeros");
	int ***A = create_three_dim_int(510, 160, 930, "zeros");
	int **C = create_two_dim_int(290, 360, "zeros");

	for (int a = 2; a < 416; a++)
	{
	  
	    D[a][a][a]=D[a-1][a-1][a]+29;
	  
	    B[a][a][a]=B[a+4][a+4][a+5]*E[a][a][a]/D[a][a][a]+A[a][a][a];
	  
	    A[a][a][a]=12;
	    A[a+2][a+4][a+4]=2;
	  
	    int var_a=D[a][a][a]/19;
	    int var_b=D[a-1][a-1][a-2]*50;
	  
	    int var_c=D[a][a][a]-41;
	    int var_d=D[a+3][a+4][a+3]/10;
	}

    return 0;
}