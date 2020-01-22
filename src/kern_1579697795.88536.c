#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(90, 290, "random");
	int *B = create_one_dim_int(450, "random");

	for (int b = 5; b < 287; b++)
	  for (int a = 3; a < 87; a++)
	  {
	    
	     A[a][b]=A[a+3][b+2]*37;
	    
	     A[a][b]=2;
	    
	     int var_a=A[a][b]*29;
	     int var_b=A[a+3][b+3]-26;
	    
	     int var_c=B[a]+26;
	     int var_d=B[a+4]/0;
	  }

    return 0;
}