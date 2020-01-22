#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(390, "random");
	int **C = create_two_dim_int(900, 750, "random");
	int **A = create_two_dim_int(490, 760, "random");

	for (int b = 0; b < 748; b++)
	  for (int a = 5; a < 385; a++)
	  {
	    
	     B[a]=B[a-5]*17;
	    
	     B[a]=B[a]+A[a][b]*C[a][b];
	    
	     C[a][b]=C[a+2][b]-12*B[a];
	    
	     B[a]=B[a+5]+C[a][b];
	    
	     int var_c=C[a][b]/43;
	     int var_d=C[a+4][b+2]/20;
	    
	     C[a][b]=B[a]*C[a][b]+A[a][b];
	     A[a][b]=B[a-4]-C[a][b]/A[a][b];
	  }

    return 0;
}