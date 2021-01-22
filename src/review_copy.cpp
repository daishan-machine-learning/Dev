#include<iostream>
namespace Review_String {
	class String {
	private:
		unsigned int m_size;
		char* buffer;
	public:
		friend std::ostream& operator<<(std::ostream& stream, const String& str);
		String(const char* msg) {
			m_size = strlen(msg);
			buffer = new char[m_size + 1];
			memcpy(buffer, msg, m_size);
			buffer[m_size] = '\0';
		}
		String(const String& obj) :m_size(obj.m_size) {
			buffer = new char[m_size + 1];
			memcpy(buffer, obj.buffer, m_size);
			buffer[m_size] = '\0';
		}
		char& operator[](int index) {
			return buffer[index];
		}

		~String() {
			std::cout << "Destroy String!" << std::endl;
			delete[] buffer;
		}
	};
	std::ostream& operator<<(std::ostream& stream, const String& str) {
		stream << str.buffer;
		return stream;
	}
	void func() {
		String str("Hello,World");
		String str1 = str; // µ÷ÓÃÁËcopy constructor
		str1[4] = 's';
		std::cout << str << std::endl;
		std::cout << str1 << std::endl;
	}

	int main_review() {

		func();
		std::cin.get();
		return 0;
	}
}