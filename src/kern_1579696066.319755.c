#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(450, "random");
	int ***B = create_three_dim_int(930, 980, 450, "random");
	int *C = create_one_dim_int(500, "random");
	int ***E = create_three_dim_int(710, 790, 890, "random");
	int *A = create_one_dim_int(20, "random");

	for (int a = 1; a < 20; a++)
	{
	  
	    A[a]=45;
	    float  var_a=A[a]/19;
	  
	    D[a]=D[a-1]-E[a][a][a];
	  
	    D[a]=A[a]-C[a];
	  
	    A[a]=D[a]-C[a]+E[a][a][a]/32;
	  
	    int var_b=E[a][a][a]+20;
	    int var_c=E[a+2][a+1][a+1]*46;
	  
	    int var_d=E[a][a][a]+25;
	    int var_e=E[a+2][a+3][a+5]/5;
	}

    return 0;
}