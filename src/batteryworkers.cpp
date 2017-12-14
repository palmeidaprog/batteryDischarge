#include "batteryworkers.h"

namespace batterydischarge {

    BatteryWorkers::BatteryWorkers(int const &workersNum): NUM(workersNum),
        TWorkers(NULL) {}

    BatteryWorkers::~BatteryWorkers() {}

   struct BatteryWorkers::workers {
        std::thread *thread;
        struct workers *next;
    };


}