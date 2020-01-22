#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(690, 430, 610, "random");
	float **B = create_two_dim_float(490, 810, "random");

	for (int d = 0; d < 806; d++)
	  for (int c = 0; c < 489; c++)
	    for (int b = 0; b < 489; b++)
	      for (int a = 0; a < 489; a++)
	      {
	        
	       B[a][b]=0.921;
	       B[a+1][b+4]=0.123;
	      }

    return 0;
}