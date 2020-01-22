#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(790, 100, 370, "random");
	int ***A = create_three_dim_int(820, 680, 850, "random");
	int **B = create_two_dim_int(270, 850, "random");

	for (int d = 1; d < 850; d++)
	  for (int c = 5; c < 680; c++)
	    for (int b = 2; b < 267; b++)
	      for (int a = 2; a < 267; a++)
	      {
	        
	       A[a][b][c]=A[a-2][b-5][c-1]-26;
	        
	       B[a][b]=12;
	       B[a+3][b+2]=19;
	        
	       int var_a=B[a][b]*24;
	       int var_b=B[a-2][b-2]+6;
	      }

    return 0;
}