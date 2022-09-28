/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  void  display7SEG_1(int num)     // LED 7 doan kiem soat den giao thong o line 1 va 3
    {

  	 if(num==0)
  	 {
  	 	 // Number 0
  	      HAL_GPIO_WritePin(LED1_1_GPIO_Port, LED1_1_Pin, RESET);          //a
  	  	  HAL_GPIO_WritePin(LED1_2_GPIO_Port, LED1_2_Pin, RESET);      //b
  	  	  HAL_GPIO_WritePin(LED1_3_GPIO_Port, LED1_3_Pin, RESET);     //c
  	  	  HAL_GPIO_WritePin(LED1_4_GPIO_Port, LED1_4_Pin, RESET);     //d
  	  	  HAL_GPIO_WritePin(LED1_5_GPIO_Port, LED1_5_Pin, RESET);     //e
  	  	  HAL_GPIO_WritePin(LED1_6_GPIO_Port, LED1_6_Pin, RESET);     //f
  	  	  HAL_GPIO_WritePin(LED1_7_GPIO_Port, LED1_7_Pin, SET);    //g
  	 }
  	 if(num==1)
  	 {
  		 // Number 1

  		  HAL_GPIO_WritePin(LED1_1_GPIO_Port, LED1_1_Pin, SET);          //a
  		  HAL_GPIO_WritePin(LED1_2_GPIO_Port, LED1_2_Pin, RESET);      //b
  		  HAL_GPIO_WritePin(LED1_3_GPIO_Port, LED1_3_Pin, RESET);     //c
  		  HAL_GPIO_WritePin(LED1_4_GPIO_Port, LED1_4_Pin, SET);     //d
  	      HAL_GPIO_WritePin(LED1_5_GPIO_Port, LED1_5_Pin, SET);     //e
  		  HAL_GPIO_WritePin(LED1_6_GPIO_Port, LED1_6_Pin, SET);     //f
  		  HAL_GPIO_WritePin(LED1_7_GPIO_Port, LED1_7_Pin, SET);    //g
  	 }
  	 if(num==2)
  	 {
  		 // Number 2

  		 HAL_GPIO_WritePin(LED1_1_GPIO_Port, LED1_1_Pin, 0);          //a
  		 HAL_GPIO_WritePin(LED1_2_GPIO_Port, LED1_2_Pin, 0);      //b
  		 HAL_GPIO_WritePin(LED1_3_GPIO_Port, LED1_3_Pin, 1);     //c
  		 HAL_GPIO_WritePin(LED1_4_GPIO_Port, LED1_4_Pin, 0);     //d
  		 HAL_GPIO_WritePin(LED1_5_GPIO_Port, LED1_5_Pin, 0);     //e
  		 HAL_GPIO_WritePin(LED1_6_GPIO_Port, LED1_6_Pin, 1);     //f
  		 HAL_GPIO_WritePin(LED1_7_GPIO_Port, LED1_7_Pin, 0);    //g
  	 }
  	 if(num==3)
  	 {
  		 // Number 3
  	    HAL_GPIO_WritePin(LED1_1_GPIO_Port, LED1_1_Pin, 0);          //a
  		HAL_GPIO_WritePin(LED1_2_GPIO_Port, LED1_2_Pin, 0);      //b
  		HAL_GPIO_WritePin(LED1_3_GPIO_Port, LED1_3_Pin, 0);     //c
  		HAL_GPIO_WritePin(LED1_4_GPIO_Port, LED1_4_Pin, 0);     //d
  		HAL_GPIO_WritePin(LED1_5_GPIO_Port, LED1_5_Pin, 1);     //e
  		HAL_GPIO_WritePin(LED1_6_GPIO_Port, LED1_6_Pin, 1);     //f
  		HAL_GPIO_WritePin(LED1_7_GPIO_Port, LED1_7_Pin, 0);    //g
  	 }
  	 if(num==4)
  	 {
  		 // Number 4
  		  HAL_GPIO_WritePin(LED1_1_GPIO_Port, LED1_1_Pin, 1);          //a
  		  HAL_GPIO_WritePin(LED1_2_GPIO_Port, LED1_2_Pin, 0);      //b
  		  HAL_GPIO_WritePin(LED1_3_GPIO_Port, LED1_3_Pin, 0);     //c
  		  HAL_GPIO_WritePin(LED1_4_GPIO_Port, LED1_4_Pin, 1);     //d
  		  HAL_GPIO_WritePin(LED1_5_GPIO_Port, LED1_5_Pin, 1);     //e
  	      HAL_GPIO_WritePin(LED1_6_GPIO_Port, LED1_6_Pin, 0);     //f
  		  HAL_GPIO_WritePin(LED1_7_GPIO_Port, LED1_7_Pin, 0);    //g
  	 }
  	 if(num==5)
  	 {
  		 //Number= 5
  	  HAL_GPIO_WritePin(LED1_1_GPIO_Port, LED1_1_Pin, 0);          //a
  	  HAL_GPIO_WritePin(LED1_2_GPIO_Port, LED1_2_Pin, 1);      //b
  	  HAL_GPIO_WritePin(LED1_3_GPIO_Port, LED1_3_Pin, 0);     //c
  	  HAL_GPIO_WritePin(LED1_4_GPIO_Port, LED1_4_Pin, 0);     //d
      HAL_GPIO_WritePin(LED1_5_GPIO_Port, LED1_5_Pin, 1);     //e
  	  HAL_GPIO_WritePin(LED1_6_GPIO_Port, LED1_6_Pin, 0);     //f
  	  HAL_GPIO_WritePin(LED1_7_GPIO_Port, LED1_7_Pin, 0);    //g
  	 }
  	 if(num==6)
  	 {
  		 // Number 6
  		  HAL_GPIO_WritePin(LED1_1_GPIO_Port, LED1_1_Pin, 0);          //a
  		  HAL_GPIO_WritePin(LED1_2_GPIO_Port, LED1_2_Pin, 1);      //b
  		  HAL_GPIO_WritePin(LED1_3_GPIO_Port, LED1_3_Pin, 0);     //c
  		  HAL_GPIO_WritePin(LED1_4_GPIO_Port, LED1_4_Pin, 0);     //d
  		  HAL_GPIO_WritePin(LED1_5_GPIO_Port, LED1_5_Pin, 0);     //e
  		  HAL_GPIO_WritePin(LED1_6_GPIO_Port, LED1_6_Pin, 0);     //f
  		  HAL_GPIO_WritePin(LED1_7_GPIO_Port, LED1_7_Pin, 0);    //g
  	 }
  	 if(num==7)
  	 {
  		 // Number 7
  		  HAL_GPIO_WritePin(LED1_1_GPIO_Port, LED1_1_Pin, 0);          //a
  		  HAL_GPIO_WritePin(LED1_2_GPIO_Port, LED1_2_Pin, 0);      //b
  		  HAL_GPIO_WritePin(LED1_3_GPIO_Port, LED1_3_Pin, 0);     //c
  		  HAL_GPIO_WritePin(LED1_4_GPIO_Port, LED1_4_Pin, 1);     //d
  	      HAL_GPIO_WritePin(LED1_5_GPIO_Port, LED1_5_Pin, 1);     //e
  		  HAL_GPIO_WritePin(LED1_6_GPIO_Port, LED1_6_Pin, 1);     //f
  		  HAL_GPIO_WritePin(LED1_7_GPIO_Port, LED1_7_Pin, 1);    //g
  	 }
  	 if(num==8)
  	 {
  		  // Number 8
  	  HAL_GPIO_WritePin(LED1_1_GPIO_Port, LED1_1_Pin, 0);          //a
  	  HAL_GPIO_WritePin(LED1_2_GPIO_Port, LED1_2_Pin, 0);      //b
  	  HAL_GPIO_WritePin(LED1_3_GPIO_Port, LED1_3_Pin, 0);     //c
  	  HAL_GPIO_WritePin(LED1_4_GPIO_Port, LED1_4_Pin, 0);     //d
  	  HAL_GPIO_WritePin(LED1_5_GPIO_Port, LED1_5_Pin, 0);     //e
  	  HAL_GPIO_WritePin(LED1_6_GPIO_Port, LED1_6_Pin, 0);     //f
  	  HAL_GPIO_WritePin(LED1_7_GPIO_Port, LED1_7_Pin, 0);    //g
  	 }
  	 if(num==9)
  	 {
  		 // Number 9
   	  HAL_GPIO_WritePin(LED1_1_GPIO_Port, LED1_1_Pin, 0);          //a
   	  HAL_GPIO_WritePin(LED1_2_GPIO_Port, LED1_2_Pin, 0);      //b
   	  HAL_GPIO_WritePin(LED1_3_GPIO_Port, LED1_3_Pin, 0);     //c
   	  HAL_GPIO_WritePin(LED1_4_GPIO_Port, LED1_4_Pin, 0);     //d
      HAL_GPIO_WritePin(LED1_5_GPIO_Port, LED1_5_Pin, 1);     //e
   	  HAL_GPIO_WritePin(LED1_6_GPIO_Port, LED1_6_Pin, 0);     //f
   	  HAL_GPIO_WritePin(LED1_7_GPIO_Port, LED1_7_Pin, 0);    //g
  	 }
   HAL_Delay(500);
    }
  void  display7SEG_2(int num)   // LED 7 doan kiem soat den giao thong o line 2 va line 4
      {
    	 // Number 0
    	 if(num==0)
    	 {
    	      HAL_GPIO_WritePin(LED2_1_GPIO_Port, LED2_1_Pin, RESET);          //a
    	  	  HAL_GPIO_WritePin(LED2_2_GPIO_Port, LED2_2_Pin, RESET);      //b
    	  	  HAL_GPIO_WritePin(LED2_3_GPIO_Port, LED2_3_Pin, RESET);     //c
    	  	  HAL_GPIO_WritePin(LED2_4_GPIO_Port, LED2_4_Pin, RESET);     //d
    	  	  HAL_GPIO_WritePin(LED2_5_GPIO_Port, LED2_5_Pin, RESET);     //e
    	  	  HAL_GPIO_WritePin(LED2_6_GPIO_Port, LED2_6_Pin, RESET);     //f
    	  	  HAL_GPIO_WritePin(LED2_7_GPIO_Port, LED2_7_Pin, SET);    //g
    	 }
    	 if(num==1)
    	 {
    		 // Number 1

    		  HAL_GPIO_WritePin(LED2_1_GPIO_Port, LED2_1_Pin, SET);          //a
    		  HAL_GPIO_WritePin(LED2_2_GPIO_Port, LED2_2_Pin, RESET);      //b
    		  HAL_GPIO_WritePin(LED2_3_GPIO_Port, LED2_3_Pin, RESET);     //c
    		  HAL_GPIO_WritePin(LED2_4_GPIO_Port, LED2_4_Pin, SET);     //d
    		  HAL_GPIO_WritePin(LED2_5_GPIO_Port, LED2_5_Pin, SET);     //e
    		  HAL_GPIO_WritePin(LED2_6_GPIO_Port, LED2_6_Pin, SET);     //f
    		 HAL_GPIO_WritePin(LED2_7_GPIO_Port, LED2_7_Pin, SET);    //g
    	 }
    	 if(num==2)
    	 {
    		 // Number 2
    		 HAL_GPIO_WritePin(LED2_1_GPIO_Port, LED2_1_Pin, 0);          //a
    		 HAL_GPIO_WritePin(LED2_2_GPIO_Port, LED2_2_Pin, 0);      //b
    		 HAL_GPIO_WritePin(LED2_3_GPIO_Port, LED2_3_Pin, 1);     //c
    		 HAL_GPIO_WritePin(LED2_4_GPIO_Port, LED2_4_Pin, 0);     //d
    		 HAL_GPIO_WritePin(LED2_5_GPIO_Port, LED2_5_Pin, 0);     //e
    		 HAL_GPIO_WritePin(LED2_6_GPIO_Port, LED2_6_Pin, 1);     //f
    		 HAL_GPIO_WritePin(LED2_7_GPIO_Port, LED2_7_Pin, 0);    //g
    	 }
    	 if(num==3)
    	 {
    		 // Number 3
    		 HAL_GPIO_WritePin(LED2_1_GPIO_Port, LED2_1_Pin, 0);          //a
    	     HAL_GPIO_WritePin(LED2_2_GPIO_Port, LED2_2_Pin, 0);      //b
    		 HAL_GPIO_WritePin(LED2_3_GPIO_Port, LED2_3_Pin, 0);     //c
    		 HAL_GPIO_WritePin(LED2_4_GPIO_Port, LED2_4_Pin, 0);     //d
    		 HAL_GPIO_WritePin(LED2_5_GPIO_Port, LED2_5_Pin, 1);     //e
    		 HAL_GPIO_WritePin(LED2_6_GPIO_Port, LED2_6_Pin, 1);     //f
    		 HAL_GPIO_WritePin(LED2_7_GPIO_Port, LED2_7_Pin, 0);    //g
    	 }
    	 if(num==4)
    	 {
    		 // Number 4
    		  HAL_GPIO_WritePin(LED2_1_GPIO_Port, LED2_1_Pin, 1);          //a
    		  HAL_GPIO_WritePin(LED2_2_GPIO_Port, LED2_2_Pin, 0);      //b
    		  HAL_GPIO_WritePin(LED2_3_GPIO_Port, LED2_3_Pin, 0);     //c
    		  HAL_GPIO_WritePin(LED2_4_GPIO_Port, LED2_4_Pin, 1);     //d
    		  HAL_GPIO_WritePin(LED2_5_GPIO_Port, LED2_5_Pin, 1);     //e
    		  HAL_GPIO_WritePin(LED2_6_GPIO_Port, LED2_6_Pin, 0);     //f
    		  HAL_GPIO_WritePin(LED2_7_GPIO_Port, LED2_7_Pin, 0);    //g
    	 }
    	 if(num==5)
    	 {
    	  HAL_GPIO_WritePin(LED2_1_GPIO_Port, LED1_1_Pin, 0);          //a
    	  HAL_GPIO_WritePin(LED2_2_GPIO_Port, LED2_2_Pin, 1);      //b
    	  HAL_GPIO_WritePin(LED2_3_GPIO_Port, LED2_3_Pin, 0);     //c
    	  HAL_GPIO_WritePin(LED2_4_GPIO_Port, LED2_4_Pin, 0);     //d
          HAL_GPIO_WritePin(LED2_5_GPIO_Port, LED2_5_Pin, 1);     //e
    	  HAL_GPIO_WritePin(LED2_6_GPIO_Port, LED2_6_Pin, 0);     //f
    	  HAL_GPIO_WritePin(LED2_7_GPIO_Port, LED2_7_Pin, 0);    //g
    	 }
    	 if(num==6)
    	 {
    		 // Number 6
    		  HAL_GPIO_WritePin(LED2_1_GPIO_Port, LED1_1_Pin, 0);          //a
    		  HAL_GPIO_WritePin(LED2_2_GPIO_Port, LED2_2_Pin, 1);      //b
    		  HAL_GPIO_WritePin(LED2_3_GPIO_Port, LED2_3_Pin, 0);     //c
    		  HAL_GPIO_WritePin(LED2_4_GPIO_Port, LED2_4_Pin, 0);     //d
    		  HAL_GPIO_WritePin(LED2_5_GPIO_Port, LED2_5_Pin, 0);     //e
    		  HAL_GPIO_WritePin(LED2_6_GPIO_Port, LED2_6_Pin, 0);     //f
    		  HAL_GPIO_WritePin(LED2_7_GPIO_Port, LED2_7_Pin, 0);    //g
    	 }
    	 if(num==7)
    	 {
    		 // Number 7
    		  HAL_GPIO_WritePin(LED2_1_GPIO_Port, LED1_1_Pin, 0);          //a
    		  HAL_GPIO_WritePin(LED2_2_GPIO_Port, LED1_2_Pin, 0);      //b
    		  HAL_GPIO_WritePin(LED2_3_GPIO_Port, LED2_3_Pin, 0);     //c
    		  HAL_GPIO_WritePin(LED2_4_GPIO_Port, LED2_4_Pin, 1);     //d
    		  HAL_GPIO_WritePin(LED2_5_GPIO_Port, LED2_5_Pin, 1);     //e
    		  HAL_GPIO_WritePin(LED2_6_GPIO_Port, LED2_6_Pin, 1);     //f
    		  HAL_GPIO_WritePin(LED2_7_GPIO_Port, LED2_7_Pin, 1);    //g
    	 }
    	 if(num==8)
    	 {
    		  // Number 8
    	  HAL_GPIO_WritePin(LED2_1_GPIO_Port, LED1_1_Pin, 0);          //a
    	  HAL_GPIO_WritePin(LED2_2_GPIO_Port, LED2_2_Pin, 0);      //b
    	  HAL_GPIO_WritePin(LED2_3_GPIO_Port, LED2_3_Pin, 0);     //c
    	  HAL_GPIO_WritePin(LED2_4_GPIO_Port, LED2_4_Pin, 0);     //d
    	  HAL_GPIO_WritePin(LED2_5_GPIO_Port, LED2_5_Pin, 0);     //e
    	  HAL_GPIO_WritePin(LED2_6_GPIO_Port, LED2_6_Pin, 0);     //f
    	  HAL_GPIO_WritePin(LED2_7_GPIO_Port, LED2_7_Pin, 0);    //g
    	 }
    	 if(num==9)
    	 {
    		 // Number 9
     	  HAL_GPIO_WritePin(LED2_1_GPIO_Port, LED2_1_Pin, 0);          //a
     	  HAL_GPIO_WritePin(LED2_2_GPIO_Port, LED2_2_Pin, 0);      //b
     	  HAL_GPIO_WritePin(LED2_3_GPIO_Port, LED2_3_Pin, 0);     //c
     	  HAL_GPIO_WritePin(LED2_4_GPIO_Port, LED2_4_Pin, 0);     //d
     	  HAL_GPIO_WritePin(LED2_5_GPIO_Port, LED2_5_Pin, 1);     //e
     	  HAL_GPIO_WritePin(LED2_6_GPIO_Port, LED2_6_Pin, 0);     //f
     	  HAL_GPIO_WritePin(LED2_7_GPIO_Port, LED2_7_Pin, 0);    //g
    	 }
      }
 // int led_status = 1;
 // int counter  = 3;  // counter dung de xac dinh delay
  while (1)
  {
    /* USER CODE END WHILE */
	  // set = LED ON
	  // RED ON : 9s -> 0s;
	  // GREEN ON: 5s -> 0s;
	  // YELLOW ON: 3s-> 0s;
	  int i = 8;

	          HAL_GPIO_WritePin ( LED_RED_Line1_GPIO_Port , LED_RED_Line1_Pin , RESET );
	 	 	  HAL_GPIO_WritePin ( LED_RED_Line3_GPIO_Port , LED_RED_Line3_Pin , RESET );
	 	 	  HAL_GPIO_WritePin ( LED_YELLOW_Line1_GPIO_Port , LED_YELLOW_Line1_Pin , RESET );
	 		  HAL_GPIO_WritePin ( LED_YELLOW_Line3_GPIO_Port , LED_YELLOW_Line3_Pin , RESET );
	 	 	  HAL_GPIO_WritePin ( LED_GREEN_Line1_GPIO_Port , LED_GREEN_Line1_Pin , SET );
	 	 	  HAL_GPIO_WritePin ( LED_GREEN_Line3_GPIO_Port , LED_GREEN_Line3_Pin , SET );

	 	 	  HAL_GPIO_WritePin ( LED_YELLOW_Line2_GPIO_Port , LED_YELLOW_Line2_Pin , RESET );
	 	 	  HAL_GPIO_WritePin ( LED_YELLOW_Line4_GPIO_Port , LED_YELLOW_Line4_Pin , RESET );
	 	 	  HAL_GPIO_WritePin ( LED_GREEN_Line2_GPIO_Port , LED_GREEN_Line2_Pin , RESET );
	 	 	  HAL_GPIO_WritePin ( LED_GREEN_Line4_GPIO_Port , LED_GREEN_Line4_Pin , RESET );
	 	 	  HAL_GPIO_WritePin ( LED_RED_Line2_GPIO_Port , LED_RED_Line2_Pin , SET );
	 	 	  HAL_GPIO_WritePin ( LED_RED_Line4_GPIO_Port , LED_RED_Line4_Pin , SET );

	 	 	  while(i>=4)
	 	 	  {
	 	 		display7SEG_2(i);
	 	 		display7SEG_1(i-4);
	 	 		i = i-1;
	 	 	  }

	 	   // State 2 : Line 1 : Yellow On, Line 2: Red on, Line 3: Yellow on, Line 4: Red on
	 	 	 HAL_GPIO_WritePin ( LED_RED_Line2_GPIO_Port , LED_RED_Line2_Pin , SET );
	 	 	 HAL_GPIO_WritePin ( LED_RED_Line4_GPIO_Port , LED_RED_Line4_Pin , SET );
	 	 	 HAL_GPIO_WritePin ( LED_YELLOW_Line2_GPIO_Port , LED_YELLOW_Line2_Pin , RESET );
	 	     HAL_GPIO_WritePin ( LED_YELLOW_Line4_GPIO_Port , LED_YELLOW_Line4_Pin , RESET );
	 	 	 HAL_GPIO_WritePin ( LED_GREEN_Line2_GPIO_Port , LED_GREEN_Line2_Pin , RESET );
	 	 	 HAL_GPIO_WritePin ( LED_GREEN_Line4_GPIO_Port , LED_GREEN_Line4_Pin , RESET );

	 	 	  HAL_GPIO_WritePin ( LED_GREEN_Line1_GPIO_Port , LED_GREEN_Line1_Pin , RESET );
	 	 	  HAL_GPIO_WritePin ( LED_GREEN_Line3_GPIO_Port , LED_GREEN_Line3_Pin , RESET );
	 	 	  HAL_GPIO_WritePin ( LED_RED_Line1_GPIO_Port , LED_RED_Line1_Pin , RESET );
	 	 	  HAL_GPIO_WritePin ( LED_RED_Line3_GPIO_Port , LED_RED_Line3_Pin , RESET );
	 	 	  HAL_GPIO_WritePin ( LED_YELLOW_Line1_GPIO_Port , LED_YELLOW_Line1_Pin , SET );
	 	 	  HAL_GPIO_WritePin ( LED_YELLOW_Line3_GPIO_Port , LED_YELLOW_Line3_Pin , SET );
	 	 	 while(i>=0)
	 	 		 {
	 	 		 	 		display7SEG_2(i);
	 	 		         	display7SEG_1(i);

	 	 		 	 		i = i-1;
	 	 	 	  }
	 	 	 i = 8;
	 	 	  // State 3 : Line 1 : Red On, Line 2: Green on, Line 3: Red on, Line 4: Green on
	 	 		 	 	 HAL_GPIO_WritePin ( LED_RED_Line2_GPIO_Port , LED_RED_Line2_Pin , RESET );
	 	 		 	 	 HAL_GPIO_WritePin ( LED_RED_Line4_GPIO_Port , LED_RED_Line4_Pin , RESET );
	 	 		 	 	 HAL_GPIO_WritePin ( LED_YELLOW_Line2_GPIO_Port , LED_YELLOW_Line2_Pin , RESET );
	 	 		 	 	 HAL_GPIO_WritePin ( LED_YELLOW_Line4_GPIO_Port , LED_YELLOW_Line4_Pin , RESET );
	 	 		 	 	 HAL_GPIO_WritePin ( LED_GREEN_Line2_GPIO_Port , LED_GREEN_Line2_Pin , SET );
	 	 		 	 	 HAL_GPIO_WritePin ( LED_GREEN_Line4_GPIO_Port , LED_GREEN_Line4_Pin , SET );


	 	 		 	 	 HAL_GPIO_WritePin ( LED_GREEN_Line1_GPIO_Port , LED_GREEN_Line1_Pin , RESET );
	 	 		 	 	 HAL_GPIO_WritePin ( LED_GREEN_Line3_GPIO_Port , LED_GREEN_Line3_Pin , RESET );
	 	 		 	 	 HAL_GPIO_WritePin ( LED_RED_Line1_GPIO_Port , LED_RED_Line1_Pin , SET );
	 	 		 	 	 HAL_GPIO_WritePin ( LED_RED_Line3_GPIO_Port , LED_RED_Line3_Pin , SET );
	 	 		 	 	 HAL_GPIO_WritePin ( LED_YELLOW_Line1_GPIO_Port , LED_YELLOW_Line1_Pin , RESET );
	 	 		 	 	 HAL_GPIO_WritePin ( LED_YELLOW_Line3_GPIO_Port , LED_YELLOW_Line3_Pin , RESET );
	 	 		 	 while(i>=4)
	 	 		 	 		 	 	  {
	 	 		 	 		 	 		display7SEG_2(i-4);
	 	 		 	 		 	 	    display7SEG_1(i);
	 	 		 	 		 	 		i = i-1;
	 	 		 	 		 	 	  }
	 	 		 		 // State 4 : Line 1 : Red On, Line 2: Yellow on, Line 3: Red on, Line 4: Yellow on

	 	 		 	 	 HAL_GPIO_WritePin ( LED_GREEN_Line1_GPIO_Port , LED_GREEN_Line1_Pin , RESET );
	 	 		 	 	 HAL_GPIO_WritePin ( LED_GREEN_Line3_GPIO_Port , LED_GREEN_Line3_Pin , RESET );
	 	 		 	 	 HAL_GPIO_WritePin ( LED_RED_Line1_GPIO_Port , LED_RED_Line1_Pin , SET );
	 	 		 	 	 HAL_GPIO_WritePin ( LED_RED_Line3_GPIO_Port , LED_RED_Line3_Pin , SET );
	 	 		 	 	 HAL_GPIO_WritePin ( LED_YELLOW_Line1_GPIO_Port , LED_YELLOW_Line1_Pin , RESET );
	 	 		 	 	 HAL_GPIO_WritePin ( LED_YELLOW_Line3_GPIO_Port , LED_YELLOW_Line3_Pin , RESET );

	 	 		 		 HAL_GPIO_WritePin ( LED_RED_Line2_GPIO_Port , LED_RED_Line2_Pin , RESET );
	 	 		 		 HAL_GPIO_WritePin ( LED_RED_Line4_GPIO_Port , LED_RED_Line4_Pin , RESET );
	 	 		 		 HAL_GPIO_WritePin ( LED_YELLOW_Line2_GPIO_Port , LED_YELLOW_Line2_Pin , SET );
	 	 		 		 HAL_GPIO_WritePin ( LED_YELLOW_Line4_GPIO_Port , LED_YELLOW_Line4_Pin , SET );
	 	 		 		 HAL_GPIO_WritePin ( LED_GREEN_Line2_GPIO_Port , LED_GREEN_Line2_Pin , RESET );
	 	 		 		 HAL_GPIO_WritePin ( LED_GREEN_Line4_GPIO_Port , LED_GREEN_Line4_Pin , RESET );
	 	 		 		while(i>=0)
	 	 		 		{

	 	 		 			 display7SEG_2(i);
	 	 		 			 display7SEG_1(i);
	 	 		 			 i = i-1;
	 	 		 		}
	 	 	HAL_Delay(500);
    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, LED_RED_Line1_Pin|LED_YELLOW_Line1_Pin|LED_GREEN_Line1_Pin|LED_RED_Line2_Pin
                          |LED_YELLOW_Line2_Pin|LED_GREEN_Line2_Pin|LED_RED_Line3_Pin|LED_YELLOW_Line3_Pin
                          |LED_GREEN_Line3_Pin|LED_RED_Line4_Pin|LED_YELLOW_Line4_Pin|LED_GREEN_Line4_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, LED1_1_Pin|LED1_2_Pin|LED1_3_Pin|LED2_4_Pin
                          |LED2_5_Pin|LED2_6_Pin|LED2_7_Pin|LED1_4_Pin
                          |LED1_5_Pin|LED1_6_Pin|LED1_7_Pin|LED2_1_Pin
                          |LED2_2_Pin|LED2_3_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : LED_RED_Line1_Pin LED_YELLOW_Line1_Pin LED_GREEN_Line1_Pin LED_RED_Line2_Pin
                           LED_YELLOW_Line2_Pin LED_GREEN_Line2_Pin LED_RED_Line3_Pin LED_YELLOW_Line3_Pin
                           LED_GREEN_Line3_Pin LED_RED_Line4_Pin LED_YELLOW_Line4_Pin LED_GREEN_Line4_Pin */
  GPIO_InitStruct.Pin = LED_RED_Line1_Pin|LED_YELLOW_Line1_Pin|LED_GREEN_Line1_Pin|LED_RED_Line2_Pin
                          |LED_YELLOW_Line2_Pin|LED_GREEN_Line2_Pin|LED_RED_Line3_Pin|LED_YELLOW_Line3_Pin
                          |LED_GREEN_Line3_Pin|LED_RED_Line4_Pin|LED_YELLOW_Line4_Pin|LED_GREEN_Line4_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : LED1_1_Pin LED1_2_Pin LED1_3_Pin LED2_4_Pin
                           LED2_5_Pin LED2_6_Pin LED2_7_Pin LED1_4_Pin
                           LED1_5_Pin LED1_6_Pin LED1_7_Pin LED2_1_Pin
                           LED2_2_Pin LED2_3_Pin */
  GPIO_InitStruct.Pin = LED1_1_Pin|LED1_2_Pin|LED1_3_Pin|LED2_4_Pin
                          |LED2_5_Pin|LED2_6_Pin|LED2_7_Pin|LED1_4_Pin
                          |LED1_5_Pin|LED1_6_Pin|LED1_7_Pin|LED2_1_Pin
                          |LED2_2_Pin|LED2_3_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
