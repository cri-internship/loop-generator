#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(640, "random");
	int ***B = create_three_dim_int(120, 370, 250, "random");
	int *C = create_one_dim_int(430, "random");
	int *D = create_one_dim_int(810, "random");

	for (int b = 0; b < 367; b++)
	  for (int a = 0; a < 115; a++)
	  {
	    
	     C[a]=21;
	     float  var_a=C[a]*40;
	    
	     A[a]=31;
	     A[a+2]=D[a];
	    
	     B[a][b][a]=4;
	     B[a+4][b+1][a+1]=23;
	    
	     int var_b=B[a][b][a]+8;
	     int var_c=B[a+5][b+3][a+4]-6;
	  }

    return 0;
}