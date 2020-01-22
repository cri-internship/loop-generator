#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(150, 510, 920, "random");
	int *C = create_one_dim_int(390, "random");
	int ***A = create_three_dim_int(540, 460, 420, "random");

	for (int a = 2; a < 145; a++)
	{
	  
	    B[a][a][a]=B[a][a+3][a+2]/48;
	  
	    C[a]=25;
	    C[a]=6;
	  
	    int var_a=B[a][a][a]+48;
	    int var_b=B[a-2][a-2][a]*31;
	  
	    int var_c=B[a][a][a]/23;
	    int var_d=B[a+5][a+3][a+2]/38;
	  
	    int var_e=A[a][a][a]/50;
	    int var_f=A[a+4][a+5][a+3]/49;
	}

    return 0;
}