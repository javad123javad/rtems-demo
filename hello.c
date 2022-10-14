/*
 * Hello world example
 */
#include <rtems.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
rtems_task Init(
  rtems_task_argument ignored
)
{
  while(1)
  {
  	printf( "\nHello World\n" );
	sleep(1);
  }

  exit( 0 );
}
