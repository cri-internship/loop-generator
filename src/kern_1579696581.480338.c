#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(570, 580, "random");
	int **C = create_two_dim_int(370, 170, "random");
	int *D = create_one_dim_int(960, "random");
	int *B = create_one_dim_int(530, "random");

	for (int b = 0; b < 169; b++)
	  for (int a = 5; a < 365; a++)
	  {
	    
	     C[a][b]=B[a]/A[a][b]-C[a][b];
	     B[a]=D[a]*A[a][b];
	    
	     D[a]=33;
	     D[a-5]=6;
	    
	     C[a][b]=42;
	    
	     D[a]=31;
	    
	     A[a][b]=43;
	     A[a+5][b+1]=50;
	    
	     int var_a=D[a]/18;
	  }

    return 0;
}