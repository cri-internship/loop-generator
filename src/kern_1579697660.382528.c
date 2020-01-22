#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(470, "ones");
	int **B = create_two_dim_int(150, 970, "ones");

	for (int a = 2; a < 145; a++)
	{
	  
	    B[a][a]=46;
	    B[a-1][a-2]=37;
	  
	    int var_a=A[a]-7;
	    int var_b=A[a-1]/1;
	  
	    int var_c=B[a][a]+19;
	    int var_d=B[a+2][a+5]+20;
	}

    return 0;
}