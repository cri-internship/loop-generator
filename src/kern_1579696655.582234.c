#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(550, "ones");
	int ***B = create_three_dim_int(430, 430, 810, "ones");

	for (int b = 0; b < 425; b++)
	  for (int a = 0; a < 428; a++)
	  {
	    
	     B[a][b][a]=B[a][b+5][a+2]/A[a];
	    
	     A[a]=A[a+4]/49;
	    
	     A[a]=A[a+1]+9;
	    
	     A[a]=A[a]*B[a][b][a];
	    
	     B[a][b][a]=A[a]-B[a][b][a];
	     A[a]=A[a+2]+13;
	  }

    return 0;
}