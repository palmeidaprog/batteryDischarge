#ifndef _BATTERYWORKERS_H_
#define _BATTERYWORKERS_H_

#include <thread>
#include <cstdlib>

using std::thread;

namespace batterydischarge {

    class BatteryWorkers {
        int const NUM;
        typedef struct workers TWorkers;
        TWorkers const *w;
        
    public:
        BatteryWorkers(int const &workersNum);
        ~BatteryWorkers();
    };

}

#endif // _BATTERYWORKERS_H_