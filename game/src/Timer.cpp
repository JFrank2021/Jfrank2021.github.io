#include "Timer.h"
#include <time.h>

using namespace std;

bool Timer::isTimeout(unsigned long seconds) {
			return seconds >= elapsedTime();
		}
void Timer::start() {
			m_begTime = clock();
		}

unsigned long Timer::elapsedTime() {
			return ((unsigned long) clock() - m_begTime) / CLOCKS_PER_SEC;
		}
