#ifndef TIMER_H
#define TIMER_H


class Timer
{
    public:

		void start();

		unsigned long elapsedTime() ;

		bool isTimeout(unsigned long seconds);
     private:
		unsigned long m_begTime;
};

#endif // TIMER_H
