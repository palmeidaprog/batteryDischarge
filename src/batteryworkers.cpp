#include "batteryworkers.h"

namespace batterydischarge {

    BatteryWorkers::BatteryWorkers(int const &workersNum): NUM(workersNum), 
        stop(false) {
            for(int i = 0; i < NUM; i++) {
                string nameN = "" + i;
                Workers n(nameN, true);
                w.push_back(n);
            }
        }

    BatteryWorkers::~BatteryWorkers() {}

    const string getUptime() {
        int h = 0, m = 0, s = 0;

        while(!stop) {
            ++s;
            if(s == 60) {
                s = 0;
                ++m;
            }
            if(m == 60) {
                m = 0;
                ++h;
            }
        }
        char r[15];
        snprintf(r, 15, "%02d:%02d:%02d", h, m, s);
        return string(r);
    }


}