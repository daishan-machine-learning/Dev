#include<iostream>

//extern int variable; //extern 是告诉链接器，在外面的translation unit 找variable
//void function() {
//
//}

class Log {
public:
	enum LogLevel {
		LevelError,
		LevelWarn,
		LevelInfo
	};
private:
	LogLevel m_LogLevel = LevelInfo; 
private:
	Log() {}
public:
	static Log& Instance() {   //只有一个Log对象
		static Log log;
		return log;
	}
	void SetLevel(LogLevel level) {
		m_LogLevel = level;
	}

	void Info(const char* message) {
		if(m_LogLevel >= LevelInfo)
			std::cout << "[INFO]: " << message << std::endl;
	}
	void Error(const char* message) {
		if (m_LogLevel >= LevelError)
			std::cout << "[ERROR]: " << message << std::endl;
	}

	void Warn(const char* message) {
		if (m_LogLevel >= LevelWarn)
		std::cout << "[WARNING]: " << message << std::endl;
	}
};
int main_log() {
	//log.SetLevel(log.LogLevelWarn);  // what  is number meaning?
	Log::Instance().SetLevel(Log::LevelWarn);   //在Log命名空间中存在Error
	Log::Instance().Warn("Message");
	Log::Instance().Info("Message");
	Log::Instance().Error("Message");
	std::cin.get();
	return 0;
}