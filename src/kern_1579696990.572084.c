#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(220, 580, 630, "ones");
	int ***A = create_three_dim_int(540, 320, 530, "ones");
	int ***C = create_three_dim_int(660, 780, 480, "ones");

	for (int a = 5; a < 216; a++)
	{
	  
	    B[a][a][a]=B[a-3][a-5][a-4]*0;
	  
	    B[a][a][a]=B[a-5][a][a-2]*10;
	  
	    C[a][a][a]=C[a-5][a-5][a-3]-26;
	  
	    A[a][a][a]=A[a+4][a+2][a+4]/B[a][a][a];
	  
	    B[a][a][a]=B[a+4][a+1][a+3]+A[a][a][a]/C[a][a][a];
	  
	    A[a][a][a]=B[a][a][a]/49-C[a][a][a];
	    B[a][a][a]=B[a-2][a][a-3]*C[a][a][a]/30;
	}

    return 0;
}