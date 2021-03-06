#ifdef LOG
#ifndef LOG_H
#define LOG_H

#include <fstream>

class Log{
    public:
	Log(const char* filename)		{ m_file.open(filename, std::ios::out); }
	~Log()					{ m_file.close(); }

	void operator<<(const char* text)	{ m_file << text << std::endl; }

    private:
	std::fstream m_file;
};

#endif
#endif
