/* USER CODE BEGIN Header */
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
TIM_HandleTypeDef htim2;

/* USER CODE BEGIN PV */
/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_TIM2_Init(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
void display7SEG(int num) {
	if(num == 0){
		HAL_GPIO_WritePin(GPIOB, A_Pin, GPIO_PIN_RESET); // A
		HAL_GPIO_WritePin(GPIOB, B_Pin, GPIO_PIN_RESET); // B
		HAL_GPIO_WritePin(GPIOB, C_Pin, GPIO_PIN_RESET); // C
		HAL_GPIO_WritePin(GPIOB, D_Pin, GPIO_PIN_RESET); // D
		HAL_GPIO_WritePin(GPIOB, E_Pin, GPIO_PIN_RESET); // E
		HAL_GPIO_WritePin(GPIOB, F_Pin, GPIO_PIN_RESET); // F
		HAL_GPIO_WritePin(GPIOB, G_Pin, GPIO_PIN_SET); // G
	}
	if(num == 1){
		HAL_GPIO_WritePin(GPIOB, A_Pin, GPIO_PIN_SET); // A
		HAL_GPIO_WritePin(GPIOB, B_Pin, GPIO_PIN_RESET); // B
		HAL_GPIO_WritePin(GPIOB, C_Pin, GPIO_PIN_RESET); // C
		HAL_GPIO_WritePin(GPIOB, D_Pin, GPIO_PIN_SET); // D
		HAL_GPIO_WritePin(GPIOB, E_Pin, GPIO_PIN_SET); // E
		HAL_GPIO_WritePin(GPIOB, F_Pin, GPIO_PIN_SET); // F
		HAL_GPIO_WritePin(GPIOB, G_Pin, GPIO_PIN_SET); // G
	}
	if(num == 2){
		HAL_GPIO_WritePin(GPIOB, A_Pin, GPIO_PIN_RESET); // A
		HAL_GPIO_WritePin(GPIOB, B_Pin, GPIO_PIN_RESET); // B
		HAL_GPIO_WritePin(GPIOB, C_Pin, GPIO_PIN_SET); // C
		HAL_GPIO_WritePin(GPIOB, D_Pin, GPIO_PIN_RESET); // D
		HAL_GPIO_WritePin(GPIOB, E_Pin, GPIO_PIN_RESET); // E
		HAL_GPIO_WritePin(GPIOB, F_Pin, GPIO_PIN_SET); // F
		HAL_GPIO_WritePin(GPIOB, G_Pin, GPIO_PIN_RESET); // G
	}
	if(num == 3){
		HAL_GPIO_WritePin(GPIOB, A_Pin, GPIO_PIN_RESET); // A
		HAL_GPIO_WritePin(GPIOB, B_Pin, GPIO_PIN_RESET); // B
		HAL_GPIO_WritePin(GPIOB, C_Pin, GPIO_PIN_RESET); // C
		HAL_GPIO_WritePin(GPIOB, D_Pin, GPIO_PIN_RESET); // D
		HAL_GPIO_WritePin(GPIOB, E_Pin, GPIO_PIN_SET); // E
		HAL_GPIO_WritePin(GPIOB, F_Pin, GPIO_PIN_SET); // F
		HAL_GPIO_WritePin(GPIOB, G_Pin, GPIO_PIN_RESET); // G
	}
	if(num == 4){
		HAL_GPIO_WritePin(GPIOB, A_Pin, GPIO_PIN_SET); // A
		HAL_GPIO_WritePin(GPIOB, B_Pin, GPIO_PIN_RESET); // B
		HAL_GPIO_WritePin(GPIOB, C_Pin, GPIO_PIN_RESET); // C
		HAL_GPIO_WritePin(GPIOB, D_Pin, GPIO_PIN_SET); // D
		HAL_GPIO_WritePin(GPIOB, E_Pin, GPIO_PIN_SET); // E
		HAL_GPIO_WritePin(GPIOB, F_Pin, GPIO_PIN_RESET); // F
		HAL_GPIO_WritePin(GPIOB, G_Pin, GPIO_PIN_RESET); // G
	}
	if(num == 5){
		HAL_GPIO_WritePin(GPIOB, A_Pin, GPIO_PIN_RESET); // A
		HAL_GPIO_WritePin(GPIOB, B_Pin, GPIO_PIN_SET); // B
		HAL_GPIO_WritePin(GPIOB, C_Pin, GPIO_PIN_RESET); // C
		HAL_GPIO_WritePin(GPIOB, D_Pin, GPIO_PIN_RESET); // D
		HAL_GPIO_WritePin(GPIOB, E_Pin, GPIO_PIN_SET); // E
		HAL_GPIO_WritePin(GPIOB, F_Pin, GPIO_PIN_RESET); // F
		HAL_GPIO_WritePin(GPIOB, G_Pin, GPIO_PIN_RESET); // G
	}
	if(num == 6){
		HAL_GPIO_WritePin(GPIOB, A_Pin, GPIO_PIN_RESET); // A
		HAL_GPIO_WritePin(GPIOB, B_Pin, GPIO_PIN_SET); // B
		HAL_GPIO_WritePin(GPIOB, C_Pin, GPIO_PIN_RESET); // C
		HAL_GPIO_WritePin(GPIOB, D_Pin, GPIO_PIN_RESET); // D
		HAL_GPIO_WritePin(GPIOB, E_Pin, GPIO_PIN_RESET); // E
		HAL_GPIO_WritePin(GPIOB, F_Pin, GPIO_PIN_RESET); // F
		HAL_GPIO_WritePin(GPIOB, G_Pin, GPIO_PIN_RESET); // G
	}
	if(num == 7){
		HAL_GPIO_WritePin(GPIOB, A_Pin, GPIO_PIN_RESET); // A
		HAL_GPIO_WritePin(GPIOB, B_Pin, GPIO_PIN_RESET); // B
		HAL_GPIO_WritePin(GPIOB, C_Pin, GPIO_PIN_RESET); // C
		HAL_GPIO_WritePin(GPIOB, D_Pin, GPIO_PIN_SET); // D
		HAL_GPIO_WritePin(GPIOB, E_Pin, GPIO_PIN_SET); // E
		HAL_GPIO_WritePin(GPIOB, F_Pin, GPIO_PIN_SET); // F
		HAL_GPIO_WritePin(GPIOB, G_Pin, GPIO_PIN_SET); // G
	}
	if(num == 8){
		HAL_GPIO_WritePin(GPIOB, A_Pin, GPIO_PIN_RESET); // A
		HAL_GPIO_WritePin(GPIOB, B_Pin, GPIO_PIN_RESET); // B
		HAL_GPIO_WritePin(GPIOB, C_Pin, GPIO_PIN_RESET); // C
		HAL_GPIO_WritePin(GPIOB, D_Pin, GPIO_PIN_RESET); // D
		HAL_GPIO_WritePin(GPIOB, E_Pin, GPIO_PIN_RESET); // E
		HAL_GPIO_WritePin(GPIOB, F_Pin, GPIO_PIN_RESET); // F
		HAL_GPIO_WritePin(GPIOB, G_Pin, GPIO_PIN_RESET); // G
	}
	if(num == 9){
		HAL_GPIO_WritePin(GPIOB, A_Pin, GPIO_PIN_RESET); // A
		HAL_GPIO_WritePin(GPIOB, B_Pin, GPIO_PIN_RESET); // B
		HAL_GPIO_WritePin(GPIOB, C_Pin, GPIO_PIN_RESET); // C
		HAL_GPIO_WritePin(GPIOB, D_Pin, GPIO_PIN_RESET); // D
		HAL_GPIO_WritePin(GPIOB, E_Pin, GPIO_PIN_SET); // E
		HAL_GPIO_WritePin(GPIOB, F_Pin, GPIO_PIN_RESET); // F
		HAL_GPIO_WritePin(GPIOB, G_Pin, GPIO_PIN_RESET); // G
	}
}

int index_led = 0;
int led_buffer[4];
void update7SEG (int index) {
	switch (index) {
	case 0:
		//first 7 SEG
		HAL_GPIO_WritePin (EN0_GPIO_Port, EN0_Pin, 0) ;
		HAL_GPIO_WritePin (GPIOA, EN1_Pin | EN2_Pin | EN3_Pin, 1) ;
		display7SEG(led_buffer[index]);
		break ;
	case 1:
		//second 7 SEG
		HAL_GPIO_WritePin (EN1_GPIO_Port, EN1_Pin , 0) ;
		HAL_GPIO_WritePin (GPIOA, EN0_Pin | EN2_Pin | EN3_Pin, 1) ;
		display7SEG(led_buffer[index]);
		break;
	case 2:
		// third 7 SEG
		HAL_GPIO_WritePin (EN2_GPIO_Port, EN2_Pin, 0) ;
		HAL_GPIO_WritePin (GPIOA, EN0_Pin | EN1_Pin | EN3_Pin, 1) ;
		display7SEG(led_buffer[index]);
		break;
	case 3:
		//forth 7 SEG
		HAL_GPIO_WritePin (EN3_GPIO_Port, EN3_Pin, 0) ;
		HAL_GPIO_WritePin (GPIOA, EN0_Pin | EN1_Pin | EN2_Pin, 1) ;
		display7SEG(led_buffer[index]);
		break ;
	default:
		break ;
	}
}
int hour = 9, minute = 59, second = 55;

void updateClockBuffer(){
	if(hour < 10){
		led_buffer[0] = 0;
		led_buffer[1] = hour;
	}else{
		led_buffer[0] = hour / 10;
		led_buffer[1] = hour % 10;
	}
	if(minute < 10){
		led_buffer[2] = 0;
		led_buffer[3] = minute;
	}else{
		led_buffer[2] = minute / 10;
		led_buffer[3] = minute % 10;
	}
}
int timer0_counter = 0;
int timer0_flag = 0;
int TIMER_CYCLE = 10;
void setTimer0 (int duration) {
	timer0_counter = duration / TIMER_CYCLE ;
	timer0_flag = 0;
}

int timer1_counter = 0;
int timer1_flag = 0;
void setTimer1(int duration){
	timer1_counter = duration / TIMER_CYCLE;
	timer1_flag = 0;
}

void timer_run() {
	if(timer0_counter > 0) {
		timer0_counter--;
		if( timer0_counter == 0) timer0_flag = 1;
	}
	if(timer1_counter > 0){
		timer1_counter--;
		if( timer1_counter == 0) timer1_flag = 1;
	}
}
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */
	setTimer0(10);
	setTimer1(10);
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
  MX_TIM2_Init();
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */
  HAL_TIM_Base_Start_IT (&htim2 ) ;
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1) {
	  if(timer0_flag == 1){
		  HAL_GPIO_TogglePin(DOT_GPIO_Port, DOT_Pin) ;
		  setTimer0 (1000);
		  second ++;
		  if ( second >= 60) {
			  second = 0;
			  minute ++;
		  }
		  if( minute >= 60) {
			  minute = 0;
			  hour ++;
		  }
		  if( hour >= 24){
			  hour = 0;
		  }
		  updateClockBuffer() ;
	  }
	  if(timer1_flag == 1){
		  setTimer1(250);
		  if(index_led > 3)
			  index_led = 0;
		  update7SEG(index_led++);
	  }
}
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
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
  * @brief TIM2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM2_Init(void)
{

  /* USER CODE BEGIN TIM2_Init 0 */
  /* USER CODE END TIM2_Init 0 */

  TIM_ClockConfigTypeDef sClockSourceConfig = {0};
  TIM_MasterConfigTypeDef sMasterConfig = {0};

  /* USER CODE BEGIN TIM2_Init 1 */
  /* USER CODE END TIM2_Init 1 */
  htim2.Instance = TIM2;
  htim2.Init.Prescaler = 7999;
  htim2.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim2.Init.Period = 9;
  htim2.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim2.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_Base_Init(&htim2) != HAL_OK)
  {
    Error_Handler();
  }
  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  if (HAL_TIM_ConfigClockSource(&htim2, &sClockSourceConfig) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim2, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM2_Init 2 */
  /* USER CODE END TIM2_Init 2 */

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
  HAL_GPIO_WritePin(GPIOA, DOT_Pin|RED_LED_Pin|EN0_Pin|EN1_Pin
                          |EN2_Pin|EN3_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, A_Pin|B_Pin|C_Pin|D_Pin
                          |E_Pin|F_Pin|G_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : DOT_Pin RED_LED_Pin EN0_Pin EN1_Pin
                           EN2_Pin EN3_Pin */
  GPIO_InitStruct.Pin = DOT_Pin|RED_LED_Pin|EN0_Pin|EN1_Pin
                          |EN2_Pin|EN3_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : A_Pin B_Pin C_Pin D_Pin
                           E_Pin F_Pin G_Pin */
  GPIO_InitStruct.Pin = A_Pin|B_Pin|C_Pin|D_Pin
                          |E_Pin|F_Pin|G_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */
void HAL_TIM_PeriodElapsedCallback ( TIM_HandleTypeDef * htim ){
	timer_run();
}

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
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
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
