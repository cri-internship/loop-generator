#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(240, "ones");
	int ***C = create_three_dim_int(560, 810, 270, "ones");
	int **A = create_two_dim_int(310, 140, "ones");

	for (int b = 5; b < 136; b++)
	  for (int a = 5; a < 239; a++)
	  {
	    
	     C[a][b][a]=C[a][b-4][a-2]/37;
	    
	     B[a]=B[a-5]-A[a][b];
	    
	     C[a][b][a]=C[a-2][b][a-3]*31;
	    
	     B[a]=B[a]+C[a][b][a];
	     C[a][b][a]=B[a+1]-49;
	    
	     A[a][b]=C[a][b][a]/31;
	     A[a][b]=C[a-2][b-5][a-4]+B[a]*A[a][b];
	    
	     int var_a=A[a][b]-17;
	     int var_b=A[a+1][b+4]/30;
	  }

    return 0;
}