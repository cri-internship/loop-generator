#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(110, 530, 350, "zeros");

	for (int a = 5; a < 105; a++)
	{
	  
	    A[a][a][a]=A[a][a-5][a]/24;
	  
	    A[a][a][a]=24;
	  
	    int var_a=A[a][a][a]*49;
	    int var_b=A[a][a+2][a+1]-41;
	}

    return 0;
}