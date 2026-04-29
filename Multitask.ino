void task1(void* pvParameters) {  // Define the tasks to be executed
    while (1) { 
        // Code to run in this task
        delay(100);
    }
}

void task2(void* pvParameters) {
    while (1) {
        // Code to run in this task
        delay(200);
    }
}

void task3(void* pvParameters) {
    while (1) {
        // Code to run in this task
        delay(1000);
    }
}

void setup() {
    // Task1. 
    xTaskCreatePinnedToCore(task1,"task1", 4096, NULL, 1,   NULL, 0);         // Core where the task should run.

    // Task 2
    xTaskCreatePinnedToCore(task2, "task2", 4096, NULL, 2, NULL, 0);

    // Task 3
    xTaskCreatePinnedToCore(task3, "task3", 4096, NULL, 3, NULL, 0);
}

void loop() {
  
}
