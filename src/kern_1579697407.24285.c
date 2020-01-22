#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(290, "zeros");
	int *B = create_one_dim_int(70, "zeros");

	for (int d = 5; d < 67; d++)
	  for (int c = 5; c < 67; c++)
	    for (int b = 5; b < 67; b++)
	      for (int a = 5; a < 67; a++)
	      {
	        
	       B[a]=B[a-5]-17;
	        
	       A[a]=A[a-4]+B[a];
	        
	       B[a]=A[a];
	        
	       B[a]=B[a]*A[a];
	       A[a]=B[a]-A[a];
	        
	       A[a]=A[a]/B[a];
	       B[a]=A[a+1]-B[a];
	      }

    return 0;
}