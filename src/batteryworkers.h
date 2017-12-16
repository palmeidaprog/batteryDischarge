#ifndef _BATTERYWORKERS_H_
#define _BATTERYWORKERS_H_


#include "workers.h"
#include <iostream>
#include <vector>

using std::string;
using std::vector;

namespace batterydischarge {

    class BatteryWorkers {
        int const NUM;
        //Workers const w;
        vector<Workers> w;
        bool stop;
        
    public:
        BatteryWorkers(int const &workersNum);
        ~BatteryWorkers();

        const string &getUptime();
    };


}

#endif // _BATTERYWORKERS_H_