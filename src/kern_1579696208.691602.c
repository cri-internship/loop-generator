#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(490, 920, 520, "random");
	int ***A = create_three_dim_int(840, 360, 980, "random");

	for (int a = 4; a < 490; a++)
	{
	  
	    A[a][a][a]=A[a+1][a+2][a+5]-22;
	  
	    A[a][a][a]=A[a+3][a+3][a+5]+4;
	  
	    int var_a=A[a][a][a]/37;
	    int var_b=A[a+4][a][a]*26;
	  
	    B[a][a][a]=A[a][a][a]+B[a][a][a];
	    A[a][a][a]=A[a-3][a-2][a-3]+6;
	  
	    int var_c=B[a][a][a]*4;
	    int var_d=B[a-4][a][a-1]-44;
	}

    return 0;
}