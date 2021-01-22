#include<iostream>
namespace String {
	class String {
	private:
		char* m_buffer;
		unsigned int m_Size;
	public:
		String(const char* msg) {
			m_Size = strlen(msg);
			m_buffer = new char[m_Size + 1];
			memcpy(m_buffer, msg, m_Size);
			m_buffer[m_Size] = '\0';
		}
		char& operator[](unsigned int idx) {
			return m_buffer[idx];
		}
		String(const String& obj) :m_Size(obj.m_Size) {
			std::cout << " Copy constructor !" << std::endl;
			m_buffer = new char[m_Size + 1];
			memcpy(m_buffer, obj.m_buffer, m_Size + 1);
		}
		friend std::ostream& operator<<(std::ostream& stream, const String& string);

		~String() {  // handle with memory leak
			delete[] m_buffer;
		}
	};
	std::ostream& operator<<(std::ostream& stream, const String& string) {
		stream << string.m_buffer;
		return stream;
	}
	void PrintString(const String& string) {
		std::cout << string << std::endl;
	}
	int main_copy() {
		String string = "Cherno";
		String second = string;
		second[2] = 's';  // 这会导致两个对象的数据都改变，因为它们指向同一个地址
		PrintString(string);
		PrintString(second);
		std::cin.get();
		return 0;
	}
}