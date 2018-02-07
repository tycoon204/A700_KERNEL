#if defined(CONFIG_MACH_J5XLTE_CHN_CMCC)
#define CAPACITY_MAX			970
#else
#define CAPACITY_MAX			1000
#endif
#define CAPACITY_MAX_MARGIN     70
#define CAPACITY_MIN			0

static sec_bat_adc_table_data_t temp_table[] = {
  {26127, 900},
  {26347, 850},
  {26567, 800},
  {26920, 750},
  {27285, 700},
  {27689, 650},
  {28167, 600},
  {28757, 550},
  {29413, 500},
  {30187, 450},
  {31006, 400},
  {31943, 350},
  {32925, 300},
  {33983, 250},
  {35005, 200},
  {36044, 150},
  {37119, 100},
  {38115, 50},
  {38980, 0},
  {39818, -50},
  {40345, -100},
  {41087, -150},
  {41507, -200},
};


#define TEMP_HIGHLIMIT_THRESHOLD_EVENT		800
#define TEMP_HIGHLIMIT_RECOVERY_EVENT		750
#define TEMP_HIGHLIMIT_THRESHOLD_NORMAL		800
#define TEMP_HIGHLIMIT_RECOVERY_NORMAL		750
#define TEMP_HIGHLIMIT_THRESHOLD_LPM		800
#define TEMP_HIGHLIMIT_RECOVERY_LPM		750

#define TEMP_HIGH_THRESHOLD_EVENT  500
#define TEMP_HIGH_RECOVERY_EVENT   450
#define TEMP_LOW_THRESHOLD_EVENT   0
#define TEMP_LOW_RECOVERY_EVENT    50
#define TEMP_HIGH_THRESHOLD_NORMAL 500
#define TEMP_HIGH_RECOVERY_NORMAL  450
#define TEMP_LOW_THRESHOLD_NORMAL  0
#define TEMP_LOW_RECOVERY_NORMAL   50
#define TEMP_HIGH_THRESHOLD_LPM    500
#define TEMP_HIGH_RECOVERY_LPM     450
#define TEMP_LOW_THRESHOLD_LPM     0
#define TEMP_LOW_RECOVERY_LPM      50