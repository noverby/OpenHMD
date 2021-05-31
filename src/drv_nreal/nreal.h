/* NReal HMD */

#pragma once

#include <stdbool.h>
#include <stdint.h>

#include "../openhmdi.h"

#define FEATURE_BUFFER_SIZE 256

typedef struct {
  float accel[3];
  float gyro[3];
  uint32_t tick;
} dwdg_sensor_sample;

bool decode_dwdg_imu_msg(dwdg_sensor_sample *smp, const unsigned char *buffer,
                         int size);
