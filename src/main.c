/*
 ============================================================================
 Name        : FreeRTOSHelloWorld.c
 Author      : kjahed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "FreeRTOS.h"
#include "task.h"
#include <stdio.h>
#include <stdlib.h>


void HelloWorldTask(void * args) {

	for(;;) {
		printf("Hello World\n");
	}

	vTaskDelete(NULL);
}

int main(void) {

	TaskHandle_t helloWorldHandler;

	xTaskCreate(HelloWorldTask,
			"HelloWorld", 10, NULL, 1, &helloWorldHandler);

	vTaskStartScheduler();
}

