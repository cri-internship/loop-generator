#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(690, "zeros");
	int **E = create_two_dim_int(40, 810, "zeros");
	int ***A = create_three_dim_int(430, 350, 800, "zeros");
	int *B = create_one_dim_int(170, "zeros");
	int ***D = create_three_dim_int(410, 560, 710, "zeros");

	for (int b = 3; b < 347; b++)
	  for (int a = 5; a < 40; a++)
	  {
	    
	     B[a]=B[a-5]/47;
	    
	     C[a]=C[a+3]+25;
	    
	     B[a]=B[a+1]-31;
	    
	     A[a][b][a]=3;
	     A[a+5][b+3][a+2]=50;
	    
	     E[a][b]=30;
	     E[a-3][b-3]=38;
	    
	     C[a]=30;
	  }

    return 0;
}