#ifndef GLOBAL_H
#define GLOBAL_H

#include "setting.h"
#include "pump_shell.h"

#define uint unsigned int

#define MAX_VOLUME 10000
#define MIN_VOLUME 1000
#define MAX_BEAT 200
#define MIN_BEAT 20
#define MAX_C_RATIO 2.0
#define MIN_C_RATIO 1.0

struct THERAPY_CONFIG{
    double compress_ratio; 	//压缩比
    uint volume;		    //压缩总量
    uint heart_beat;
    uint pwm_rate[2];
    uint time_push_acc;
    uint time_push_avg;
    uint time_pull_acc;
    uint time_pull_avg;
};

extern struct THERAPY_CONFIG thero;
extern QString temp;
extern char tempch[6];
extern pump_shell *ppump;
extern unsigned long cnt;

#endif // GLOBAL_H
