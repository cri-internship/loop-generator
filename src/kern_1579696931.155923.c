#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(370, 840, 740, "ones");
	double ***A = create_three_dim_double(60, 380, 620, "ones");

	for (int a = 5; a < 55; a++)
	{
	  
	    B[a][a][a]=B[a][a][a-5]*0.43;
	  
	    B[a][a][a]=0.795;
	  
	    A[a][a][a]=0.354;
	    A[a-2][a-2][a-4]=0.894;
	  
	    A[a][a][a]=A[a][a][a]*B[a][a][a];
	    B[a][a][a]=A[a+3][a+5][a+1]-0.207;
	}

    return 0;
}