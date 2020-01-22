#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(960, 900, 190, "zeros");
	double ***B = create_three_dim_double(820, 170, 360, "zeros");

	for (int a = 4; a < 816; a++)
	{
	  
	    B[a][a][a]=B[a+3][a+3][a+2]+A[a][a][a];
	  
	    B[a][a][a]=0.541;
	  
	    A[a][a][a]=0.224;
	    A[a][a-2][a-1]=0.05;
	  
	    A[a][a][a]=A[a][a][a]/0.461;
	    B[a][a][a]=A[a][a][a-4]/B[a][a][a];
	  
	    A[a][a][a]=A[a][a][a]*B[a][a][a];
	    B[a][a][a]=A[a+2][a+4][a]*B[a][a][a];
	  
	    B[a][a][a]=A[a][a][a]-B[a][a][a];
	    B[a][a][a]=A[a+4][a+3][a]*B[a][a][a];
	}

    return 0;
}